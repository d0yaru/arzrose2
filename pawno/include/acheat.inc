//Developer Alexandr Triazov(alex.triazov)
#if defined _testguard_included
	#endinput
#endif
#define _testguard_included
#include a_samp
#include Pawn.RakNet
#define AC_VERSION          "0.3"
#define DEFAULT_VEHICLETIME 500 //тайм за которое можно сесть в машину
#define MAX_TP				60 //дистанция телепорта
#define MAX_WARNING_TPCAR 	6 //кол-во варнингов до кика
#define SCM 				SendClientMessage
#define foreach_player(%0)  for(new %0 = GetPlayerPoolSize(); %0 >= 0; %0--)
#define AC_TPFoot   (0)
#define AC_TPVEH    (1)
#define AC_ANTIBOT     (2)
#define AC_RVANKA      (3)
#define AC_JETPACK     (4)
//============================================================================//
enum m_acheat
{
	aName[46],
	bool:aStatus
};
new acheat[][m_acheat] =
{
	{"Телепорт пешком",true},
	{"Телепорт машины",true},
	{"Невалидные боты",true},
	{"Пиздарванка",true},
	{"Джетпак",true}
};
new AC_Tick;
static playerIP[MAX_PLAYERS][16];
static playerName[MAX_PLAYERS][25];
const UNOCCUPIED_SYNC = 209;
const AIM_SYNC = 203;
const ID_VehicleDestroyed = 9;
const PLAYER_SYNC = 207;
const VEH_SYNC = 200;
enum AC_Player
{
	a_TTime,
	bool:a_STP,
	Float:a_TeleportPos[3],
 	bool:a_entercar,
    a_entercartime,
	a_Warning[sizeof(acheat)],
	Float:a_OnFootPos[3],
	Float:a_OnFootVelocity[3]
};
new ACPI[MAX_PLAYERS][AC_Player];
//============================================================================//
stock g_OnGameModeInit()
{
	print(!"--------------------------------------");
	print(!"\tXXL Guard загружен!\t");
	print(!"\tВерсия античита: "AC_VERSION"\t");
	print(!"\tРазработчик: Alexandr Triazov(alex.triazov)\t");
	print(!"--------------------------------------");
	return 1;
}
stock g_OnPlayerConnect(playerid)
{
	GetPlayerIp(playerid, playerIP[playerid], 16);
	GetPlayerName(playerid, playerName[playerid], 25);
	if(acheat[2][aStatus] == true)
	{
	    if(IsPlayerNPC(playerid)) OnDetectCheat(playerid,AC_ANTIBOT);
		new count = 3;
		foreach_player(i) if(i != playerid && !strcmp(playerIP[i], playerIP[playerid]))
		{
			if(--count <= 0)
			{
				OnDetectCheat(playerid,AC_ANTIBOT);
				break;
			}
		}
	}
    ACPI[playerid][a_entercartime] 			=
    ACPI[playerid][a_TTime] 				= 2;
    ACPI[playerid][a_STP] 					=
   	ACPI[playerid][a_entercar] 				= false;
	return 1;
}
stock g_OnPlayerUpdate(playerid)
{
	if(acheat[3][aStatus] == true)
	{
	    GetPlayerVelocity(playerid,ACPI[playerid][a_OnFootVelocity][0],ACPI[playerid][a_OnFootVelocity][1],ACPI[playerid][a_OnFootVelocity][2]);
	    if(ACPI[playerid][a_OnFootVelocity][0] > 2.0 || ACPI[playerid][a_OnFootVelocity][1] > 2.0)
	    {
	        SetPVarInt(playerid, !"Pizdorvanka", GetPVarInt(playerid, !"Pizdorvanka") + 1);
	        if(GetPVarInt(playerid, !"Pizdorvanka") >= 3) OnDetectCheat(playerid,AC_RVANKA);
	    }
	}
	if(GetTickCount() - AC_Tick < 1000) return 1;
	AC_Tick = GetTickCount();
 	if(acheat[0][aStatus] == true)
    {
		foreach_player(i)
		{
		    if(!IsPlayerConnected(i) || GetPlayerState(i)!=PLAYER_STATE_ONFOOT) continue;
			GetPlayerPos(i, ACPI[i][a_OnFootPos][0], ACPI[i][a_OnFootPos][1], ACPI[i][a_OnFootPos][2]);
			if(ACPI[i][a_OnFootPos][0] < ACPI[i][a_TeleportPos][0]-MAX_TP || ACPI[i][a_OnFootPos][0] > ACPI[i][a_TeleportPos][0]+MAX_TP || ACPI[i][a_OnFootPos][1] < ACPI[i][a_TeleportPos][1]-MAX_TP || ACPI[i][a_OnFootPos][1] > ACPI[i][a_TeleportPos][1]+MAX_TP)
			if(ACPI[i][a_STP] == false)
			{
			    if(ACPI[i][a_TTime] <= 0) ACPI[i][a_STP] = true;
				ACPI[i][a_TTime]--;
			}
			else OnDetectCheat(i,AC_TPFoot);
			ACPI[i][a_TeleportPos][0] = ACPI[i][a_OnFootPos][0];
			ACPI[i][a_TeleportPos][1] = ACPI[i][a_OnFootPos][1];
			ACPI[i][a_TeleportPos][2] = ACPI[i][a_OnFootPos][2];
		}
	}
	if(GetPlayerSpecialAction(playerid) == SPECIAL_ACTION_USEJETPACK) OnDetectCheat(playerid, AC_JETPACK);
	return 1;
}
stock g_J_SetPlayerPos(playerid)
{
 	if(acheat[0][aStatus] == true) ACPI[playerid][a_STP] = false,ACPI[playerid][a_TTime] = 4;
	return 1;
}
stock g_SetSpawnInfoEx(playerid)
{
    if(acheat[0][aStatus] == true) ACPI[playerid][a_STP] = false,ACPI[playerid][a_TTime] = 4;
	return 1;
}
stock g_OnPlayerStateChange(playerid, newstate)
{
	if(acheat[2][aStatus] == false)
    {
	    if(newstate == PLAYER_STATE_ONFOOT)
		{
			ACPI[playerid][a_entercar] = false;
		}
		if(newstate == PLAYER_STATE_PASSENGER || newstate == PLAYER_STATE_DRIVER)
		{
		    if(ACPI[playerid][a_entercartime] > GetTickCount()) return OnDetectCheat(playerid,AC_TPVEH); //return 1;//SendAdminsMessagef(COLOR_RED, "<Warning>{FFFFFF} %s[%i] был кикнут по подозрению в использовании чит-программ: Teleport Car PASSENGER[NEW].", PN(playerid), playerid),ToCheat(1,playerid),SendMessageDebug(playerid, "bag 2");
		    ACPI[playerid][a_entercar] = true;
		}
	}
	return 1;
}
stock g_OnPlayerEnterVehicle(playerid,vehicleid,ispassenger)
{
    #pragma unused ispassenger
    ACPI[playerid][a_STP] = false,ACPI[playerid][a_TTime] = 4;
	if(acheat[2][aStatus] == false)
    {
	    new model = GetVehicleModel(vehicleid);
		if(ACPI[playerid][a_entercar]) return OnDetectCheat(playerid,AC_TPVEH);//return 1;//SendAdminsMessagef(COLOR_RED, "<Warning>{FFFFFF} %s[%i] был кикнут по подозрению в использовании чит-программ: Teleport Car [NEW].", PN(playerid), playerid),ToCheat(2,playerid),SendMessageDebug(playerid, "bag 1");
		ACPI[playerid][a_entercartime] = GetTickCount()+AC_Vehicle_Time(model);
	}
    return 1;
}
stock g_OnPlayerExitVehicle(playerid)
{
    if(acheat[2][aStatus] == true) ACPI[playerid][a_entercar] = false;
	return 1;
}
stock AC_Vehicle_Time(model)
{
	new timeupdate = DEFAULT_VEHICLETIME;
	switch(model)
	{
	    case 424: timeupdate = 350;
	    case 448: timeupdate = 350;
	    case 461..463: timeupdate = 350;
	    case 468: timeupdate = 350;
	    case 471: timeupdate = 350;
	    case 481: timeupdate = 350;
	    case 509..510: timeupdate = 350;
	    case 521..523: timeupdate = 350;
	    case 530..531: timeupdate = 350;
	    case 571..572: timeupdate = 350;
	    case 581: timeupdate = 350;
	    case 586: timeupdate = 350;
	    case 457: timeupdate = 350;
	    case 485: timeupdate = 350;
	    case 486: timeupdate = 350;
	    case 568: timeupdate = 350;
	    case 430: timeupdate = 100;
	    case 446: timeupdate = 100;
	    case 452..454: timeupdate = 100;
	    case 472..473: timeupdate = 100;
	    case 484: timeupdate = 100;
	    case 493: timeupdate = 100;
	    case 539: timeupdate = 100;
	    case 595: timeupdate = 100;
	    case 449: timeupdate = 100;
	    case 537..538: timeupdate = 100;
	    case 570: timeupdate = 100;
	}
	return timeupdate+1000;
}
static CheckFloat(Float:data)
{
	if(floatcmp(data, data) != 0 || floatcmp(data, 0x7F800000) == 0 || floatcmp(data, 0xFF800000) == 0) return 1;
	return 0;
}
IPacket:UNOCCUPIED_SYNC(playerid, BitStream:bs)
{
    new UNOCCUPIED[PR_UnoccupiedSync];
    BS_ReadUint8(bs, 8);
    BS_ReadUnoccupiedSync(bs, UNOCCUPIED);
    if(!(-1.0 <= UNOCCUPIED[PR_roll][0] <= 1.00000)
    || !(-1.0 <= UNOCCUPIED[PR_roll][1] <= 1.00000)
    || !(-1.0 <= UNOCCUPIED[PR_direction][0] <= 1.00000)
    || !(-1.0 <= UNOCCUPIED[PR_roll][2] <= 1.00000)
    || !(-1.0 <= UNOCCUPIED[PR_direction][1] <= 1.00000)
    || !(-1.0 <= UNOCCUPIED[PR_direction][2] <= 1.00000)
    || !(-20000.0 <= UNOCCUPIED[PR_position][0] <= 20000.00000)
    || !(-20000.0 <= UNOCCUPIED[PR_position][1] <= 20000.00000)
    || !(-20000.0 <= UNOCCUPIED[PR_position][2] <= 20000.00000)
    || !(-1.00000 <= UNOCCUPIED[PR_angularVelocity][0] <= 1.00000)
    || !(-1.00000 <= UNOCCUPIED[PR_angularVelocity][1] <= 1.00000)
    || !(-1.00000 <= UNOCCUPIED[PR_angularVelocity][2] <= 1.00000)
    || !(-100.00000 <= UNOCCUPIED[PR_velocity][0] <= 100.00000)
    || !(-100.00000 <= UNOCCUPIED[PR_velocity][1] <= 100.00000)
    || !(-100.00000 <= UNOCCUPIED[PR_velocity][2] <= 100.00000)) return 0;
    return 1;
}
IPacket:AIM_SYNC(playerid, BitStream:bs)
{
    new aimData[PR_AimSync];

    BS_IgnoreBits(bs, 8);
    BS_ReadAimSync(bs, aimData);

    if (aimData[PR_aimZ] != aimData[PR_aimZ])
    {
        aimData[PR_aimZ] = 0.0;

        BS_SetWriteOffset(bs, 8);
        BS_WriteAimSync(bs, aimData);
    }

    return 1;
}
IRPC:ID_VehicleDestroyed(playerid, BitStream:bs)
{
    new vehicleid;
    BS_IgnoreBits(bs, 8);
    BS_ReadUint16(bs, vehicleid);
    if(vehicleid == 0) return 0;
    return 1;
}
IPacket:PLAYER_SYNC(playerid, BitStream:bs)
{
	if(GetPlayerWeapon(playerid) >= 22 && !IsPlayerInAnyVehicle(playerid) && GetPlayerWeapon(playerid) != 34)
	{
		new onFootData[PR_OnFootSync];
		BS_IgnoreBits(bs, 8);
		BS_ReadOnFootSync(bs, onFootData);
		if(onFootData[PR_specialAction] != 3)
		{
			onFootData[PR_specialAction] = 3;
			BS_SetWriteOffset(bs, 8);
			BS_WriteOnFootSync(bs, onFootData);
		}
	}
	return 1;
}
IPacket:212(playerid, BitStream:bs)
{
    new spectatingData[PR_SpectatingSync];
    BS_IgnoreBits(bs, 8);
    BS_ReadSpectatingSync(bs, spectatingData);
    for(new i; i < 3; i++) if(CheckFloat(spectatingData[PR_position][i]) || floatabs(spectatingData[PR_position][i]) > 20000.0) return 0;
    return 1;
}
/*public OnIncomingPacket(playerid, packetid, BitStream:bs)
{
	if(packetid == PLAYER_SYNC)
	{
		new onFootData[PR_OnFootSync];
		BS_IgnoreBits(bs, 8);
		BS_ReadOnFootSync(bs, onFootData);
		if (onFootData[PR_surfingVehicleId] != 0 &&
		onFootData[PR_surfingVehicleId] != INVALID_VEHICLE_ID
		) {
			if ((floatabs(onFootData[PR_surfingOffsets][0]) >= 10.0) ||
			    (floatabs(onFootData[PR_surfingOffsets][1]) >= 10.0) ||
			    (floatabs(onFootData[PR_surfingOffsets][2]) >= 10.0) ||
			    (floatabs(onFootData[PR_surfingOffsets][0]) <= -10.0) ||
			    (floatabs(onFootData[PR_surfingOffsets][1]) <= -10.0) ||
			    (floatabs(onFootData[PR_surfingOffsets][2]) <= -10.0)
			) {
			    return 0;
			}
		}
	}
	return 1;
}*/

#define FILTERSCRIPT
#include a_samp
#include streamer

stock ffo_CreateObject(modelid, Float:X, Float:Y, Float:Z, Float:rX, Float:rY, Float:rZ, Float:DrawDistance = 300.0) return CreateObject(modelid, Float:X, Float:Y, Float:Z, Float:rX, Float:rY, Float:rZ, DrawDistance);
stock ffo_SetObjectMaterial(objectid, materialindex, modelid, txdname[], texturename[], materialcolor = 0) return SetObjectMaterial(objectid, materialindex, modelid, txdname, texturename, materialcolor);
stock ffo_SetPlayerObjectMaterial(playerid, objectid, materialindex, modelid, txdname[], texturename[], materialcolor = 0) return SetPlayerObjectMaterial(playerid, objectid, materialindex, modelid, txdname, texturename, materialcolor);

stock fo_CreateDynamicObject(modelid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz, worldid = -1, interiorid = -1, playerid = -1, Float:streamdistance = 300.0, Float:drawdistance = 300.0, areaid = -1, priority = 0)
{
	if(streamdistance > 600.0) streamdistance = 600.0;
	
    return CreateDynamicObject(modelid, x, y, z, rx, ry, rz, worldid, interiorid, playerid, streamdistance, drawdistance, areaid, priority);
}
#if defined _ALS_CreateDynamicObject
	#undef CreateDynamicObject
#else
	#define _ALS_CreateDynamicObject
#endif
#define CreateDynamicObject fo_CreateDynamicObject

stock fo_CreateDynamicObjectEx(modelid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz, Float:streamdistance = 300.0, Float:drawdistance = 300.0, worlds[] = { -1 }, interiors[] = { -1 }, players[] = { -1 }, areas[] = { -1 }, priority = 0, maxworlds = sizeof worlds, maxinteriors = sizeof interiors, maxplayers = sizeof players, maxareas = sizeof areas)
{
	if(streamdistance > 600.0) streamdistance = 600.0;
	
	return CreateDynamicObjectEx(modelid, x, y, z, rx, ry, rz, streamdistance, drawdistance, worlds, interiors, players, areas, priority, maxworlds, maxinteriors, maxplayers, maxareas);
}

#if defined _ALS_CreateDynamicObjectEx
	#undef CreateDynamicObjectEx
#else
	#define _ALS_CreateDynamicObjectEx
#endif
#define CreateDynamicObjectEx fo_CreateDynamicObjectEx

stock fo_CreateObject(modelid, Float:X, Float:Y, Float:Z, Float:rX, Float:rY, Float:rZ, Float:DrawDistance = 300.0) return CreateDynamicObject(modelid, Float:X, Float:Y, Float:Z, Float:rX, Float:rY, Float:rZ, -1, -1, -1, 300.0, DrawDistance);
#if defined _ALS_CreateObject
	#undef CreateObject
#else
	#define _ALS_CreateObject
#endif
#define CreateObject fo_CreateObject

stock fo_DestroyObject(objectid) return DestroyDynamicObject(objectid);
#if defined _ALS_DestroyObject
	#undef DestroyObject
#else
	#define _ALS_DestroyObject
#endif
#define DestroyObject fo_DestroyObject

stock fo_SetObjectMaterialText(objectid, text[], materialindex = 0, materialsize = OBJECT_MATERIAL_SIZE_256x128, fontface[] = "Arial", fontsize = 24, bold = 1, fontcolor = 0xFFFFFFFF, backcolor = 0, textalignment = 0) return SetDynamicObjectMaterialText(objectid, materialindex, text, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment);
#if defined _ALS_SetObjectMaterialText
	#undef SetObjectMaterialText
#else
	#define _ALS_SetObjectMaterialText
#endif
#define SetObjectMaterialText fo_SetObjectMaterialText

stock fo_GetObjectModel(objectid) return Streamer_GetIntData(STREAMER_TYPE_OBJECT, objectid, E_STREAMER_MODEL_ID);
#if defined _ALS_GetObjectModel
	#undef GetObjectModel
#else
	#define _ALS_GetObjectModel
#endif
#define GetObjectModel fo_GetObjectModel

#if defined _ALS_AttachObjectToVehicle
	#undef AttachObjectToVehicle
#else
	#define _ALS_AttachObjectToVehicle
#endif
#define AttachObjectToVehicle AttachDynamicObjectToVehicle

#if defined _ALS_AttachObjectToObject
	#undef AttachObjectToObject
#else
	#define _ALS_AttachObjectToObject
#endif
#define AttachObjectToObject AttachDynamicObjectToObject

#if defined _ALS_AttachObjectToPlayer
	#undef AttachObjectToPlayer
#else
	#define _ALS_AttachObjectToPlayer
#endif
#define AttachObjectToPlayer AttachDynamicObjectToPlayer

#if defined _ALS_SetObjectPos
	#undef SetObjectPos
#else
	#define _ALS_SetObjectPos
#endif
#define SetObjectPos SetDynamicObjectPos

#if defined _ALS_GetObjectPos
	#undef GetObjectPos
#else
	#define _ALS_GetObjectPos
#endif
#define GetObjectPos GetDynamicObjectPos

#if defined _ALS_SetObjectRot
	#undef SetObjectRot
#else
	#define _ALS_SetObjectRot
#endif
#define SetObjectRot SetDynamicObjectRot

#if defined _ALS_GetObjectRot
	#undef GetObjectRot
#else
	#define _ALS_GetObjectRot
#endif
#define GetObjectRot GetDynamicObjectRot

#if defined _ALS_SetObjectNoCameraCol
	#undef SetObjectNoCameraCol
#else
	#define _ALS_SetObjectNoCameraCol
#endif
#define SetObjectNoCameraCol SetDynamicObjectNoCameraCol

#if defined _ALS_IsValidObject
	#undef IsValidObject
#else
	#define _ALS_IsValidObject
#endif
#define IsValidObject IsValidDynamicObject

#if defined _ALS_SetObjectMaterial
	#undef SetObjectMaterial
#else
	#define _ALS_SetObjectMaterial
#endif
#define SetObjectMaterial SetDynamicObjectMaterial

public OnFilterScriptInit()
{
	Streamer_SetVisibleItems(STREAMER_TYPE_OBJECT, 1500);

	//=================[Интерєри]====================//
	#include ..\library\MAP\Int\Interor_int
	#include ..\library\MAP\Int\Magazin-autoZap_int
	#include ..\library\MAP\Int\Second_Hand_int
	#include ..\library\MAP\Int\ARZCasik
	//=================[Маппинг ЛС]====================//
	#include ..\library\MAP\LS_Map\blockpost
	#include ..\library\MAP\LS_Map\centralrinok
	#include ..\library\MAP\LS_Map\diamond
	#include ..\library\MAP\LS_Map\DmZone
	#include ..\library\MAP\LS_Map\Gruchik
	#include ..\library\MAP\LS_Map\Kvart
	#include ..\library\MAP\LS_Map\Magaz_Zap
	#include ..\library\MAP\LS_Map\LS_MAP
	#include ..\library\MAP\LS_Map\Pirs
	#include ..\library\MAP\LS_Map\Polomino_Hils
	//=================[Маппинг ЛВ]====================//
	#include ..\library\MAP\LV_Map\DiamondHouse
	#include ..\library\MAP\LV_Map\stokazik
	#include ..\library\MAP\LV_Map\luxeSalon
	#include ..\library\MAP\LV_Map\Sto_LV
	//=================[Маппинг СФ]====================//
	#include ..\library\MAP\SF_Map\mapul
	#include ..\library\MAP\SF_Map\TestDrive
	#include ..\library\MAP\SF_Map\trailer
	#include ..\library\MAP\SF_Map\STO_SF
	//=================[Остальное]====================//
	#include ..\library\MAP\Other\AZS_NEW
	#include ..\library\MAP\Other\House
	#include ..\library\MAP\Other\icon
	#include ..\library\MAP\Other\Second_Hand
	#include ..\library\MAP\Other\tochilki
	#include ..\library\MAP\Other\Video
	//=========================================================================//
}


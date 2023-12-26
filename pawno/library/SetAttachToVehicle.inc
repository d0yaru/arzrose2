stock TwinTurboDestroy(vehicleid)
{
	for(new i; i < 2; i++) if(AttachVehicle[vehicleid][i] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][i]), AttachVehicle[vehicleid][i] = -1;
	TwinTurbo[vehicleid][Engine] =
	TwinTurbo[vehicleid][cStatus] = false;
}
stock SupremeDestroy(vehicleid) if(AttachVehicle[vehicleid][2] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][2]), AttachVehicle[vehicleid][2] = -1;
stock LaunchDestroy(vehicleid) for(new i = 3; i < 11; i++) if(AttachVehicle[vehicleid][i] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][i]), AttachVehicle[vehicleid][i] = -1;
stock PremiumDestroy(vehicleid)
{
	for(new i = 18; i < 32; i++) if(AttachVehicle[vehicleid][i] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][i]), AttachVehicle[vehicleid][i] = -1;
	TwinTurbo[vehicleid][Engine] =
	TwinTurbo[vehicleid][cStatus] = false;
}
stock HalloweenDestroy(vehicleid) for(new i = 32; i < 45; i++) if(AttachVehicle[vehicleid][i] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][i]), AttachVehicle[vehicleid][i] = -1;
stock ClassicDestroy(vehicleid) return vehicleid;
stock FuturisticDestroy(vehicleid) for(new i = 45; i < 55; i++) if(AttachVehicle[vehicleid][i] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][i]), AttachVehicle[vehicleid][i] = -1;
stock CyberpunkDestroy(vehicleid) return vehicleid;
stock FutureTaxiDestroy(vehicleid) for(new i = 55; i < 59; i++) if(AttachVehicle[vehicleid][i] != -1) DestroyDynamicObject(AttachVehicle[vehicleid][i]), AttachVehicle[vehicleid][i] = -1;
stock TwinTurboInstall(vehicleid)
{
	TwinTurbo[vehicleid][Engine] =
	TwinTurbo[vehicleid][cStatus] = true;

	AttachVehicle[vehicleid][0] = CreateDynamicObject(19327, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][0], 0, "{ff5d49}/{f34f3e}/{f7372b}/", 140, "Ariel", 40, 1, 0, 0, 1);

	AttachVehicle[vehicleid][1] = CreateDynamicObject(19327, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][1], 0, "{FFFFFF}TWINTURBO{FAAC58} PACKAGE", 130, "Ariel", 20, 1, 0, 0, 1);

	switch(GetVehicleModel(vehicleid))
	{
		case 400:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.435, -2.343, -0.137, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.090, -2.344, -0.137, 0.000, 0.000, 0.000);
		}
		case 401:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -2.110, 0.334, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -2.111, 0.339, -90.000, 0.000, 0.000);
		}
		case 402:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -2.339, 0.266, -81.300, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -2.344, 0.266, -80.800, 0.000, 0.000);
		}
		case 404:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -2.405, 0.571, -25.300, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -2.428, 0.576, -26.700, 0.000, 0.000);
		}
		case 405:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -2.243, 0.253, -85.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.090, -2.249, 0.258, -90.000, 0.000, 0.000);
		}
		case 409:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -3.380, 0.284, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -3.383, 0.284, -90.000, 0.000, 0.000);
		}
		case 410:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.400, -1.899, 0.363, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.130, -1.900, 0.360, -90.000, 0.000, 0.000);
		}
		case 411:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -1.376, 0.363, -59.300, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -1.380, 0.364, -60.000, 0.000, 0.000);
		}
		case 412:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, 0.913, -3.161, 0.153, -90.000, -90.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.919, -2.630, 0.162, -90.000, -90.000, 0.000);
		}
		case 413:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -2.626, -0.658, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.130, -2.619, -0.660, 0.000, 0.000, 0.000);
		}
		case 415:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.450, -1.062, 0.397, -21.400, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.060, -1.067, 0.390, -24.799, 0.000, 0.000);
		}
		case 418:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -2.673, -0.630, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.090, -2.674, -0.630, 0.000, 0.000, 0.000);
		}
		case 419:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -1.605, 0.440, -48.299, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -1.604, 0.439, -48.200, 0.000, 0.000);
		}
		case 421:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.440, -2.773, 0.088, -33.700, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.080, -2.780, 0.086, -34.999, 0.000, 0.000);
		}
		case 422:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.440, -0.320, 0.470, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.080, -0.330, 0.470, 0.000, 0.000, 0.000);
		}
		case 426:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.390, -2.389, 0.270, -85.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.130, -2.390, 0.269, -84.100, 0.000, 0.000);
		}
		case 429:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.440, -1.331, 0.370, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.080, -1.331, 0.370, 0.000, 0.000, 0.000);
		}
		case 434:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -1.180, 0.690, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -1.171, 0.690, 0.000, 0.000, 0.000);
		}
		case 436:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.429, -1.627, 0.467, -45.599, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -1.633, 0.471, -41.800, 0.000, 0.000);
		}
		case 439:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -2.178, 0.242, -82.600, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.120, -2.188, 0.244, -82.900, 0.000, 0.000);
		}
		case 445:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -2.432, 0.235, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.120, -2.440, 0.240, -90.000, 0.000, 0.000);
		}
		case 451:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.440, -1.172, 0.487, -78.299, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.090, -1.178, 0.500, -77.399, 0.000, 0.000);
		}
		case 458:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.440, -2.862, 0.070, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -2.862, 0.070, 0.000, 0.000, 0.000);
		}
		case 466:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -2.153, 0.270, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -2.160, 0.280, -90.000, 0.000, 0.000);
		}
		case 467:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.449, -2.160, 0.280, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.080, -2.161, 0.280, -90.000, 0.000, 0.000);
		}
		case 474:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.400, -2.916, -0.187, 5.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.120, -2.921, -0.190, 0.000, 0.000, 0.000);
		}
		case 475:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -2.764, 0.005, -31.800, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -2.761, 0.000, -27.100, 0.000, 0.000);
		}
		case 477:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.380, -1.883, 0.433, -71.599, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.140, -1.881, 0.436, -72.199, 0.000, 0.000);
		}
		case 478:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -0.310, 0.600, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -0.320, 0.600, 0.000, 0.000, 0.000);
		}
		case 479:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -2.811, 0.000, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -2.812, 0.000, 0.000, 0.000, 0.000);
		}
		case 480:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -1.120, 0.420, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.060, -1.131, 0.420, 0.000, 0.000, 0.000);
		}
		case 482:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.370, -2.710, -0.590, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.160, -2.732, -0.590, 0.000, 0.000, 0.000);
		}
		case 489:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -2.678, 0.330, -24.800, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.120, -2.676, 0.327, -24.500, 0.000, 0.000);
		}
		case 491:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.380, -2.199, 0.260, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.150, -2.204, 0.260, -90.000, 0.000, 0.000);
		}
		case 492:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.450, -1.783, 0.584, -30.500, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -1.800, 0.582, -29.699, 0.000, 0.000);
		}
		case 494:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -1.775, 0.457, -57.599, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.110, -1.780, 0.456, -57.599, 0.000, 0.000);
		}
		case 495:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.450, -2.091, 0.607, -21.800, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.090, -2.114, 0.613, -19.199, 0.000, 0.000);
		}
		case 496:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.440, -1.790, 0.564, -73.199, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -1.792, 0.563, -71.999, 0.000, 0.000);
		}
		case 500:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, 0.920, -1.600, 0.020, 0.000, 0.000, 90.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.920, -1.070, 0.020, 0.000, 0.000, 90.000);
		}
		case 502:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -1.596, 0.478, -59.099, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.109, -1.598, 0.482, -58.600, 0.000, 0.000);
		}
		case 503:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.450, -1.585, 0.509, -27.499, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.070, -1.602, 0.509, -26.499, 0.000, 0.000);
		}
		case 506:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.412, -2.518, -0.290, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.109, -2.523, -0.289, 5.199, 0.000, 0.000);
		}
		case 533:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -2.151, 0.290, -90.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -2.161, 0.290, -90.000, 0.000, 0.000);
		}
		case 541:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -1.711, 0.385, -77.699, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.090, -1.710, 0.380, -78.000, 0.000, 0.000);
		}
		case 559:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.450, -1.509, 0.545, -76.799, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -1.520, 0.550, -75.000, 0.000, 0.000);
		}
		case 560:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.410, -1.518, 0.482, -61.800, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.120, -1.521, 0.485, -61.600, 0.000, 0.000);
		}
		case 562:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.420, -1.399, 0.503, -59.500, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -1.399, 0.500, -58.600, 0.000, 0.000);
		}
		case 565:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.430, -2.120, -0.176, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.100, -2.120, -0.180, 0.000, 0.000, 0.000);
		}
		case 579:
		{
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][0], vehicleid, -0.210, -2.840, 0.140, 0.000, 0.000, 0.000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][1], vehicleid, 0.330, -2.831, 0.130, 0.000, 0.000, 0.000);
		}
		default:
		{
		    DestroyDynamicObject(AttachVehicle[vehicleid][0]), DestroyDynamicObject(AttachVehicle[vehicleid][1]);
		    AttachVehicle[vehicleid][0] = -1, AttachVehicle[vehicleid][1] = -1;
		}
	}
	return 1;
}
stock PremiumInstall(vehicleid)
{
	TwinTurbo[vehicleid][Engine] =
	TwinTurbo[vehicleid][cStatus] = true;

    switch(GetVehicleModel(vehicleid))
	{
		case 487:
  		{
  			AttachVehicle[vehicleid][18] = CreateDynamicObject(19344, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][18], 0, 16322, "a51_stores", "metalic128", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][18], vehicleid, 1.215000, 0.730000, 1.403000, 0.000000, 90.000000, 90.000000);
			AttachVehicle[vehicleid][19] = CreateDynamicObject(19846, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][19], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][19], vehicleid, -1.359000, -1.398000, 0.510000, 0.000000, 75.000000, 0.000000);
			AttachVehicle[vehicleid][20] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][20], 0, "- PREMIUM -", 130, "Georgia", 35, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][20], vehicleid, -0.436000, -1.297000, 1.303000, 0.000000, -4.499000, -167.500000);
			AttachVehicle[vehicleid][21] = CreateDynamicObject(1444, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][21], 0, 16322, "a51_stores", "wtmetal3", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][21], vehicleid, 0.509000, -1.380000, 0.569000, 270.000000, 450.000000, 0.000000);
			AttachVehicle[vehicleid][22] = CreateDynamicObject(1444, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][22], 0, 16322, "a51_stores", "wtmetal3", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][22], vehicleid, -0.528000, -1.440000, 0.570000, 630.000000, 630.000000, 0.000000);
			AttachVehicle[vehicleid][23] = CreateDynamicObject(19344, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][23], 0, 16322, "a51_stores", "metalic128", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][23], vehicleid, -1.259000, 0.739000, 1.400000, 0.000000, 90.000000, 90.000000);
			AttachVehicle[vehicleid][24] = CreateDynamicObject(1554, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 3
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][24], 2, 1560, "7_11_door", "CJ_CHROME2", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][24], 1, 1560, "7_11_door", "CJ_CHROME2", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][24], 0, 19942, "policeradio1", "policeradio1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][24], vehicleid, 1.230000, -0.310000, 1.410000, 0.000000, 90.000000, 90.000000);
			AttachVehicle[vehicleid][25] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][25], 0, "- PREMIUM -", 130, "Georgia", 35, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][25], vehicleid, 0.440000, -1.283000, 1.304000, 0.000000, -5.499000, -12.500000);
			AttachVehicle[vehicleid][26] = CreateDynamicObject(1554, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 3
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][26], 2, 1560, "7_11_door", "CJ_CHROME2", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][26], 1, 1560, "7_11_door", "CJ_CHROME2", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][26], 0, 19942, "policeradio1", "policeradio1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][26], vehicleid, -1.259000, -0.340000, 1.400000, 0.000000, 90.000000, 90.000000);
			AttachVehicle[vehicleid][27] = CreateDynamicObject(1444, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][27], 0, 16322, "a51_stores", "wtmetal3", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][27], vehicleid, 0.490000, 0.170000, 1.370000, 90.000000, 0.000000, 90.000000);
			AttachVehicle[vehicleid][28] = CreateDynamicObject(1554, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 3
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][28], 2, 1560, "7_11_door", "CJ_CHROME2", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][28], 1, 1560, "7_11_door", "CJ_CHROME2", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][28], 0, 19942, "policeradio1", "policeradio1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][28], vehicleid, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][29] = CreateDynamicObject(19846, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][29], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][29], vehicleid, 1.290000, -1.380000, 0.520000, 0.000000, 105.000000, 0.000000);
			AttachVehicle[vehicleid][30] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][30], 0, "43534", 130, "Georgia", 35, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][30], vehicleid, -0.556000, 1.199000, 1.319000, 0.000000, -4.399000, 176.399002);
			AttachVehicle[vehicleid][31] = CreateDynamicObject(1444, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][31], 0, 16322, "a51_stores", "wtmetal3", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][31], vehicleid, -0.570000, 0.170000, 1.380000, 270.000000, 90.000000, 180.000000);
		}
	}
	CarInfo[GetVehicleID(vehicleid)][cSlotItem][10] = Item_Premium;
	return true;
}
stock LaunchInstall(vehicleid)
{
    switch(GetVehicleModel(vehicleid))
	{
	    case 411://инфа лаунч
	    {
     		AttachVehicle[vehicleid][3] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "77", 130, "Impact", 190, 1, 0xFF7C1300, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.000000, -0.160000, 0.674000, 0.000000, -90.899002, 90.000000);
			AttachVehicle[vehicleid][4] = CreateDynamicObject(19475, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "RED LINE", 140, "Impact", 120, 0, 0xFF7C1300, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 1.038000, -0.930000, -0.487000, 0.000000, 2.799000, 0.000000);
			AttachVehicle[vehicleid][5] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, -1.020200, 1.509120, 0.030710, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][6] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][6], 0, "=", 130, "Ariel", 190, 1, 0xFF7C1300, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 0.000000, -1.919000, 0.237000, 5.899000, 90.000000, 0.000000);
			AttachVehicle[vehicleid][7] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][7], 0, "=", 100, "Ariel", 199, 1, 0xFF7C1300, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, 0.000000, 2.055000, 0.123000, -10.900000, 90.000000, 0.099000);
			AttachVehicle[vehicleid][8] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, 1.151300, 1.509100, 0.048100, 0.000000, 0.000000, 0.000000);

	    }
	    case 541://булет лаунч
	    {
 			AttachVehicle[vehicleid][3] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "9", 140, "Impact", 180, 1, -16777216, 0, 1);
	        AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.020, -0.202, 0.602, -87.599, -179.799, 0.000);
	        AttachVehicle[vehicleid][4] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "g", 140, "Wingdings", 40, 0, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, -0.858, -0.930, 0.323, 0.000, 33.699, 0.000);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][5], 0, "GT", 140, "Impact", 70, 0, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.000, -1.673, 0.380, -78.700, 0.000, 0.000);
		    AttachVehicle[vehicleid][6] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][6], 0, "5000", 140, "Engravers MT", 30, 1, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 0.000, -1.780, 0.368, -75.799, 0.000, 0.000);
		    AttachVehicle[vehicleid][7] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][7], 0, "5000", 140, "Engravers MT", 30, 1, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][8] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, -0.970, 1.012, 0.000, 0.000, 0.000, 3.299);
		    AttachVehicle[vehicleid][9] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][9], vehicleid, 1.091, 1.004, 0.000, 0.000, 0.000, -3.299);
	    }
	    case 451://турик лаунч
	    {
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(2771, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); //
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][3], 2, 10023, "bigwhitesfe", "bigwhite_6", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][3], 1, 3440, "airportpillar", "metalic_64", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][3], 0, 19655, "mattubes", "reddirt1", GetLaunchColor(vehicleid)); // тут заменить цвет
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.280000, -1.440000, 0.459000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][4] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "69", 130, "Impact", 190, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 0.000000, -0.550000, 0.549000, 0.000000, 90.499001, 90.000000);
			AttachVehicle[vehicleid][5] = CreateDynamicObject(19917, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, -0.040000, -1.420000, 0.249000, 0.000000, 180.000000, 90.000000);
			AttachVehicle[vehicleid][6] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, -0.943000, 1.052000, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][7] = CreateDynamicObject(2771, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 3
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][7], 2, 10023, "bigwhitesfe", "bigwhite_6", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][7], 1, 3440, "airportpillar", "metalic_64", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][7], 0, 19655, "mattubes", "reddirt1", GetLaunchColor(vehicleid)); // тут заменить цвет
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, -0.310000, -1.430000, 0.469000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][8] = CreateDynamicObject(19475, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][8], 0, "GTF 120", 140, "Impact", 100, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, -1.006000, -0.929000, 0.000000, 0.000000, -2.399000, 180.000000);
			AttachVehicle[vehicleid][9] = CreateDynamicObject(19475, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][9], 0, "GTF 120", 140, "Impact", 100, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][9], vehicleid, 1.009000, -0.919000, 0.000000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][10] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][10], vehicleid, 1.073100, 1.052000, 0.001000, 0.000000, 0.000000, 0.000000);
	    }
	    case 603:// феникс лаунч
	    {
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "%", 130, "GTAWEAPON3", 120, 0, -1, 0, 1);
	        AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.000, -1.441, 0.480, -73.000, 0.000, 0.000);
	        AttachVehicle[vehicleid][4] = CreateDynamicObject(19482, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, ".", 90, "Courier New", 199, 1, -56320, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 0.026, -0.649, 0.751, 0.000, -70.399, -91.899);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(1023, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.000, -2.432, 0.100, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][6] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 1.152, 0.915, -0.080, 11.799, 3.999, -179.600);
		    AttachVehicle[vehicleid][7] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, -1.282, 0.917, -0.073, 11.799, -6.799, 179.600);
	    }
	    case 480:// комет лаунч
	    {
	        AttachVehicle[vehicleid][3] = CreateDynamicObject(19939, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][3], 0, 11145, "carrierint_sfs", "noodpot_64", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.000000, 1.971000, -0.520000, 0.000000, 24.099001, 90.000000);
			AttachVehicle[vehicleid][4] = CreateDynamicObject(19476, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "GT\nRS", 130, "Impact", 100, 0, 0xFFAADD00, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, -0.817000, -0.964000, 0.406000, 0.000000, -25.099001, 540.000000);
			AttachVehicle[vehicleid][5] = CreateDynamicObject(1138, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.000000, -2.410000, 0.019000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][6] = CreateDynamicObject(19476, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][6], 0, "GT\nRS", 130, "Impact", 100, 0, 0xFFAADD00, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 0.819000, -0.960000, 0.399000, 0.000000, -24.400000, 0.000000);
			AttachVehicle[vehicleid][7] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][7], 0, "=", 100, "Ariel", 199, 1, 0xFFAADD00, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, 0.000000, 1.248000, 0.239000, -0.299000, 90.000000, 0.000000);
			AttachVehicle[vehicleid][8] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, 1.059740, 1.027070, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][9] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][9], vehicleid, -0.931000, 1.027100, 0.001000, 0.000000, 0.000000, 0.000000);
	    }
	    case 415://читаха лаунч
	    {
	        AttachVehicle[vehicleid][3] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "n", 130, "Webdings", 100, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.000000, -0.420000, 0.590000, -0.599000, 90.000000, 0.000000);
			AttachVehicle[vehicleid][4] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "I", 130, "Ariel", 199, 1, 0xFF009246, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, -0.110000, 2.011000, 0.071000, 0.000000, 102.198997, 90.000000);
			AttachVehicle[vehicleid][5] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][5], 0, "I", 130, "Ariel", 199, 1, 0xFFCE2B37, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.140000, 2.013000, 0.071000, 0.000000, 102.399002, 90.000000);
			AttachVehicle[vehicleid][6] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 1.008800, 1.123600, -0.058400, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][7] = CreateDynamicObject(1014, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, 0.000000, -2.369000, 0.179000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][8] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][8], 0, "I", 130, "Ariel", 199, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, 0.019000, 2.013000, 0.071000, 0.000000, 102.198997, 90.000000);
			AttachVehicle[vehicleid][9] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][9], vehicleid, -0.879600, 1.123590, -0.058440, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][10] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][10], 0, "88", 130, "Calibri", 69, 1, 0xFF000000, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][10], vehicleid, 0.000000, -0.421000, 0.593000, 0.000000, -90.499001, 90.000000);
		}
	    case 402:// буфало лаунч
	    {
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(18663, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "17", 140, "Impact", 199, 0, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.011, -1.642, 0.503, 0.000, 66.199, 89.200);
		    AttachVehicle[vehicleid][4] = CreateDynamicObject(18663, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, ".", 60, "Courier New", 199, 0, -5242880, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 0.016, 0.042, 0.741, 0.199, 88.499, 90.700);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][5], 0, "DAKOTA", 140, "Impact", 50, 0, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.000, -0.557, 0.730, -87.999, 0.000, 0.000);
	    }
	    case 579:// хантли лаунч
	    {
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(1071, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
	        AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 1.079, -0.910, -0.460, 0.000, 0.000, 0.000);
	        AttachVehicle[vehicleid][4] = CreateDynamicObject(1069, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, -1.071, -0.920, -0.480, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(1049, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.000, -2.291, 1.180, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][6] = CreateDynamicObject(1037, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 0.020, -0.540, -0.090, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][7] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][7], 0, "||", 60, "Fixedsys", 150, 0, -1, 0, 2);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, -0.420, -1.371, 1.224, -90.200, 0.000, 0.000);
	    }
	    case 429:// банша лаунч
	    {
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
	        AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, -0.931, 1.125, 0.020, 15.500, 0.000, 2.000);
	        AttachVehicle[vehicleid][4] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 1.060, 1.121, 0.020, 15.500, 0.000, -2.000);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][5], 0, ".", 90, "Courier New", 199, 0, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, -1.011, 0.823, 0.201, 1.599, 0.000, -86.600);
		    AttachVehicle[vehicleid][6] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][6], 0, ".", 90, "Courier New", 199, 0, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 1.011, 0.823, 0.201, 1.399, 0.000, 86.600);
		    AttachVehicle[vehicleid][7] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][7], 0, "01", 140, "Impact", 60, 0, -16744448, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, -1.004, 0.832, -0.180, 0.000, 0.000, -87.099);
		    AttachVehicle[vehicleid][8] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][8], 0, "01", 140, "Impact", 60, 0, -16744448, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, 1.003, 0.822, -0.180, 0.000, 0.000, 87.099);
		    AttachVehicle[vehicleid][9] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][9], 0, "RT", 140, "Impact", 40, 1, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][9], vehicleid, -0.988, -1.022, -0.400, 18.500, 0.000, -93.099);
		    AttachVehicle[vehicleid][10] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][10], 0, "RT", 140, "Impact", 40, 1, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][10], vehicleid, 0.988, -1.022, -0.400, 18.500, 0.000, 93.099);
	    }
        case 560:// султан лаунч
	    {
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "AIien", 140, "Segoe Script", 90, 1, -16759516, 0, 1);
	        AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.000, -1.223, 0.639, -59.599, 0.000, 0.000);
	        AttachVehicle[vehicleid][4] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
	        SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "-17-", 140, "Segoe Script", 60, 1, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 0.000, -1.380, 0.570, -59.599, 0.000, 0.000);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 1.131, 1.260, 0.080, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][6] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, -1.000, 1.260, 0.080, 0.000, 0.000, 0.000);
	    }
	    case 506:// супер гт лаунч
	    {
	    	AttachVehicle[vehicleid][3] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, -0.944900, 0.985300, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][4] = CreateDynamicObject(19476, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "TEAM", 130, "Impact", 100, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, -0.061000, -1.748000, 0.329000, 0.000000, -74.299004, 270.000000);
			AttachVehicle[vehicleid][5] = CreateDynamicObject(19475, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][5], 0, "GTJ", 140, "Impact", 100, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 1.036000, -1.110000, -0.070000, 0.000000, 0.000000, 6.499000);
			AttachVehicle[vehicleid][6] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 1.075200, 0.985300, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][7] = CreateDynamicObject(19476, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][7], 0, "GTJ", 140, "Impact", 100, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, -1.043000, -1.201000, -0.059000, 0.000000, 0.699000, 173.699005);
			AttachVehicle[vehicleid][8] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][8], 0, "JDM", 120, "Impact", 50, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, -0.050000, -1.523000, 0.405000, 0.000000, -72.000000, 270.000000);
		}
		case 559:// джестер лаунч
		{
			AttachVehicle[vehicleid][3] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "J", 130, "GTAWEAPON3", 100, 0, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, 0.060000, -1.409000, 0.572000, 0.000000, -78.399002, 270.000000);
			AttachVehicle[vehicleid][4] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 1.146300, 1.087100, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][5] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, -1.014600, 1.087100, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][6] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][6], 0, "~", 130, "Webdings", 120, 1, 0xFFD22519, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 0.060000, -1.471000, 0.556000, 0.000000, 77.999001, 90.000000);
			AttachVehicle[vehicleid][7] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, -1.014600, 1.087100, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][8] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][8], 0, "~", 130, "Webdings", 120, 1, 0xFFD22519, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][8], vehicleid, 0.060000, -1.471000, 0.556000, 0.000000, 77.999001, 90.000000);
			AttachVehicle[vehicleid][9] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][9], vehicleid, -1.014600, 1.087100, 0.001000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][10] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][10], 0, "~", 130, "Webdings", 120, 1, 0xFFD22519, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][10], vehicleid, 0.060000, -1.471000, 0.556000, 0.000000, 77.999001, 90.000000);
		}
		case 562:
		{
		    AttachVehicle[vehicleid][3] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		 	SetDynamicObjectMaterialText(AttachVehicle[vehicleid][3], 0, "s", 90, "Segoe Script", 155, 1, -1, 0, 1);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][3], vehicleid, -0.089, -1.420, 0.487, -57.900, -79.500, 1.000);
            AttachVehicle[vehicleid][4] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][4], 0, "POWER", 140, "Comic Sans MS", 70, 0, -1, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][4], vehicleid, 0.000, -1.246, 0.589, -57.899, 0.000, 0.000);
		    AttachVehicle[vehicleid][5] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][5], 0, "GT", 90, "Segoe Script", 48, 1, -8388608, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][5], vehicleid, 0.000, -1.404, 0.502, -57.699, 0.000, 0.000);
		    AttachVehicle[vehicleid][6] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][6], vehicleid, 1.091, 1.181, -0.040, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][7] = CreateDynamicObject(1112, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][7], vehicleid, -0.970, 1.181, -0.040, 0.000, 0.000, 0.000);
		}
	}
	CarInfo[GetVehicleID(vehicleid)][cSlotItem][10] = Item_Launch;
	return true;
}
GetLaunchColor(vehicleid)
{
	new color;
	switch(CarInfo[GetVehicleID(vehicleid)][cColor_1])
	{
	    case 0,40,127,133,186,215: color = 0xFF000000;
		case 2,7,93,100,135: color = 0xFF4682B4;
		case 5,147,176,178,232,233,237,242: color = 0xFFEE82EE;
		case 6: color = 0xFFF4A460;
		case 8,15,19,23,26,27,33,34,41,50,64,67,111,192,253: color = 0xFFC0C0C0;
		case 16,86,128,137,154,226,229,241,243: color = 0xFF008000;
		case 79,108,152,162,198: color = 0xFF0000FF;
		case 53,101,125,134,201,211,255: color = 0xFF4B0082;
	}
	return color;
}
stock SupremeInstall(vehicleid)
{
    AttachVehicle[vehicleid][2] = CreateDynamicObject(1547, 0.0, 0.0, -1000.0, 0.0, 0.0, 0.0, -1, -1, -1, 300.0, 300.0);
    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][2], 0, "Supreme", 120, "Ariel", 120, 1, 0xFFFFFFFF, 0xFFB50100, 1);
    switch(GetVehicleModel(vehicleid))
    {
        case 400: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.037, -1.979, 0.456, 70.599, -4.999, 5.200);
        case 401: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.030, -1.389, 0.467, 50.699, 0.000, 0.000);
        case 402: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.778, 0.429, 22.900, 0.000, 0.000);
        case 403: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.009, -1.462, 1.820, 90.699, 0.000, 0.000);
        case 404: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.236, 0.380, 3.300, 0.000, 0.000);
        case 405: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.818, 0.478, 23.400, 0.000, 0.000);
        case 406: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.079, 3.929, 2.189, 0.000, 0.000, 0.000);
        case 407: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.030, -3.320, 0.280, 79.999, 0.000, 0.000);
        case 408: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.030, 0.000, 0.000, 0.000, 0.000, 0.000);
        case 409: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -3.506, 0.133, 49.799, 0.000, 0.000);
        case 410: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.029, -1.299, 0.568, 45.800, 0.000, 0.000);
        case 411: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.009, -1.015, 0.548, 24.400, 0.000, 0.000);
        case 412: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.493, 0.450, 27.599, 0.000, 0.000);
        case 413: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.030, -2.670, 0.017, 91.500, 0.000, 0.000);
        case 414: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.030, -3.336, 1.213, 90.800, 0.000, 0.000);
        case 415: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.142, 0.427, 58.300, 0.000, 0.000);
        case 416: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -3.669, -0.260, 87.899, 0.000, 0.000);
        case 418: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.348, 0.670, 77.999, 0.000, 0.000);
		case 419: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.990, 0.231, 3.699, 0.000, 0.000);
		case 420: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.406, 0.280, 6.100, 0.000, 0.000);
        case 421: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.667, 0.463, 35.700, 0.000, 0.000);
        case 422: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.059, -0.382, 0.428, 89.199, 0.000, 0.000);
        case 423: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.159, 0.688, 89.799, 0.000, 0.000);
        case 424: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.240, 0.529, 13.000, 0.000, 0.000);
        case 426: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.010, -1.686, 0.544, 31.000, 0.000, 0.000);
        case 427: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -3.650, -0.013, 90.199, 0.000, 0.000);
        case 428: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.970, -0.024, 87.500, 0.000, 0.000);
        case 429: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.949, 0.349, 0.000, 0.000, 0.000);
        case 431: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.030, -5.707, 0.380, 85.399, 0.000, 0.000);
        case 434: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.468, 0.320, 10.500, 0.000, 0.000);
        case 437: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -5.409, 0.424, 87.099, 0.000, 0.000);
        case 436: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.541, 0.501, 39.100, 0.000, 0.000);
        case 438: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.009, -2.159, 0.250, 2.499, 0.000, 0.000);
        case 439: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.029, -2.089, 0.270, 2.699, 0.000, 0.000);
        case 442: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -3.001, 0.554, 73.900, 0.000, 0.000);
        case 443: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, 2.099, 0.980, 87.799, 0.000, 0.000);
        case 444: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -0.505, 1.249, 75.700, 0.000, 0.000);
		case 445: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.691, 0.547, 37.299, 0.000, 0.000);
		case 451: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.026, -1.473, 0.422, 19.399, 0.600, 0.599);
        case 456: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -5.409, 0.424, 87.099, 0.000, 0.000);
        case 449: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.299, 0.289, 0.000, 0.000, 0.000);
        case 475: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.497, 0.556, 18.399, 0.000, 0.000);
        case 477: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.009, -2.372, 0.331, 2.299, 0.000, 0.000);
        case 478: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.614, 0.591, 64.100, 0.000, 0.000);
        case 480: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.539, 0.269, 0.000, 0.000, 0.000);
        case 482: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.339, -2.567, 0.057, 87.799, 0.000, 0.000);
        case 489: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.523, 0.657, 64.500, 0.000, 0.000);
        case 490: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.991, 0.672, 63.899, 0.000, 0.000);
        case 495: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.121, 0.574, 71.599, 0.000, 0.000);
        case 492: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.310, 0.329, 0.000, 0.000, 0.000);
        case 494: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.734, 0.488, 37.500, 0.000, 0.000);
        case 496: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.619, 0.629, 20.300, 0.000, 0.000);
        case 498: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.399, -3.060, 0.170, 86.900, 0.000, 0.000);
        case 499: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -3.436, 0.914, 90.399, 0.000, 0.000);
        case 500: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.774, 0.604, 63.600, 0.000, 0.000);
        case 502: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.778, 0.382, 31.199, 0.000, 0.000);
        case 503: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -2.332, 0.274, 7.399, 0.000, 0.000);
        case 506: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.607, 0.376 , 16.799, 0.000, 0.000);
        case 533: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.411, 0.260, 0.000, 0.000, 0.000);
        case 539: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.179, 1.129, 0.000, 0.000, 0.000);
        case 541: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.010, -1.266, 0.471, 12.999, 0.000, 0.000);
        case 542: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.429, 0.439, 0.000, 0.000, 0.000);
        case 549: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.139, 0.299, 0.000, 0.000, 0.000);
        case 559: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.010, -1.851, 0.464, 15.600, 0.000, 0.000);
        case 560: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.180, 0.662, 29.200, 0.000, 0.000);
        case 562: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.020, -1.193, 0.621, 31.400, 0.000, 0.000);
        case 579: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, -0.010, -2.838, 0.361, 75.099, 0.000, 0.800);
        case 596: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.220, 0.849, 0.000, 0.000, 0.000);
        case 597: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.650, 0.579, 29.900, 0.000, 0.000);
        case 598: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.159, 0.359, 0.000, 0.000, 0.000);
        case 599: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.372, 0.701, 88.599, 0.000, 0.000);
        case 600: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -2.738, 0.066, 87.200, 0.000, 0.000);
        case 604: AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][2], vehicleid, 0.000, -1.899, 0.399, 0.000, 0.000, 0.000);
        default: DestroyDynamicObject(AttachVehicle[vehicleid][2]), AttachVehicle[vehicleid][2] = -1;
    }
    return 1;
}
stock HalloweenInstall(vehicleid)
{
    switch(GetVehicleModel(vehicleid))
	{
	    case 411://инфа
	    {
		    AttachVehicle[vehicleid][32] = CreateDynamicObject(19917, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
	        AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, -0.020, 1.929, -0.354, -9.999, 0.000, 0.000);
         	AttachVehicle[vehicleid][33] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, -0.160, 2.004, -0.292, -40.799, 8.499, 89.299);
      		AttachVehicle[vehicleid][34] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, 0.160, 2.004, -0.292, -40.799, -8.499, -89.299);
   		  	AttachVehicle[vehicleid][35] = CreateDynamicObject(18702, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, 1.528, 1.929, -0.850, -27.100, 0.000, 92.000);
      		AttachVehicle[vehicleid][36] = CreateDynamicObject(18702, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, -1.528, 1.929, -0.850, -27.100, 0.000, -92.000);
            AttachVehicle[vehicleid][37] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
            SetDynamicObjectMaterialText(AttachVehicle[vehicleid][37], 0, "ROAD\nTO", 130, "Segoe Script", 90, 0, -5103070, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][37], vehicleid, -0.029, -0.299, 0.678, -89.799, 19.400, 0.000);
      		AttachVehicle[vehicleid][38] = CreateDynamicObject(19477, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][38], 0, "HFГГ", 130, "Comic Sans MS", 130, 0, -5103070, 0, 1);
   		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][38], vehicleid, 0.001, -1.874, 0.246, 179.600, -84.999, 88.100);
       		AttachVehicle[vehicleid][39] = CreateDynamicObject(19846, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 0, 16640, "a51", "a51_vent1", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][39], vehicleid, 0.000, 2.582, -0.480, 0.000, 0.000, 0.000);
			AttachVehicle[vehicleid][40] = CreateDynamicObject(1003, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][40], vehicleid, 0.000, -2.292, 0.240, 0.000, 0.000, 0.000);
      		AttachVehicle[vehicleid][41] = CreateDynamicObject(362, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][41], vehicleid, -1.209, -1.514, 0.268, 0.000, 29.500, 94.499);
	    }
	    case 415://читаха
		{
		    AttachVehicle[vehicleid][32] = CreateDynamicObject(2661,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][32], 0, 3214, "quarry", "Was_swr_trolleycage", 0xFFFFFFFF);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, -0.312000, 0.646000, 0.371000, -70.699997, -89.300003, -178.899002);
			AttachVehicle[vehicleid][33] = CreateDynamicObject(18702,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, -0.270000, -4.365000, -0.016000, -67.699997, 0.000000, 0.000000);
			AttachVehicle[vehicleid][34] = CreateDynamicObject(18702,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, 0.290000, -4.365000, -0.016000, -67.699997, 0.000000, 0.000000);
			AttachVehicle[vehicleid][35] = CreateDynamicObject(2661,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][35], 0, 3214, "quarry", "Was_swr_trolleycage", 0xFFFFFFFF);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, 0.312000, 0.646000, 0.371000, -70.699997, 89.300003, 178.899002);
			AttachVehicle[vehicleid][36] = CreateDynamicObject(1114,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][36], 1, 1560, "7_11_door", "CJ_CHROME2", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, -0.340000, -2.382000, -0.431000, -63.699001, 0.000000, 0.000000);
			AttachVehicle[vehicleid][37] = CreateDynamicObject(1114,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][37], 1, 1560, "7_11_door", "CJ_CHROME2", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][37], vehicleid, 0.400000, -2.382000, -0.431000, -63.699001, 0.000000, 0.000000);
			AttachVehicle[vehicleid][38] = CreateDynamicObject(362,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][38], vehicleid, -0.841000, 0.797000, 0.098000, 96.099998, 22.499001, 92.999001);
			AttachVehicle[vehicleid][39] = CreateDynamicObject(362,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][39], vehicleid, 0.774000, 0.686000, 0.095000, -98.799004, 337.500000, 36.098999);
			AttachVehicle[vehicleid][40] = CreateDynamicObject(2662,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][40], 0, "O", 90, "GTAWEAPON3", 140, 0, 0xCC000000, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][40], vehicleid, -0.100000, 1.909000, 0.116000, 282.000000, 0.000000, 180.199997);
		}
		case 451://турик
	    {
            AttachVehicle[vehicleid][32] = CreateDynamicObject(1738, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][32], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][32], 1, 1560, "7_11_door", "CJ_CHROME2", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, -0.060, 2.288, -0.345, -92.199, 0.299, 0.000);
		    AttachVehicle[vehicleid][33] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][33], 0, "N", 130, "Wingdings", 199, 0, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, -0.000, -0.550, 0.560, -89.800, 0.000, -90.599);
		    AttachVehicle[vehicleid][34] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][34], 0, "N", 130, "Wingdings", 199, 0, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000);
		    AttachVehicle[vehicleid][35] = CreateDynamicObject(2593, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][35], 0, 16093, "a51_ext", "des_dirttrack1", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, 0.070, -2.732, -0.109, 0.000, 89.699, 0.000);
		    AttachVehicle[vehicleid][36] = CreateDynamicObject(19843, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][36], 0, 3214, "quarry", "Was_swr_trolleycage", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, -0.080, 0.426, 0.309, -20.099, 0.000, 0.000);
		    AttachVehicle[vehicleid][37] = CreateDynamicObject(19843, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][37], 0, 3214, "quarry", "Was_swr_trolleycage", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][37], vehicleid, 0.080, 0.426, 0.309, -20.099, 0.000, 0.000);
		    AttachVehicle[vehicleid][38] = CreateDynamicObject(19843, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][38], 0, 3214, "quarry", "Was_swr_trolleycage", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][38], vehicleid, -0.080, -1.500, 0.363, 20.099, 0.000, 0.000);
		    AttachVehicle[vehicleid][39] = CreateDynamicObject(19843, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 0, 3214, "quarry", "Was_swr_trolleycage", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][39], vehicleid, 0.080, -1.500, 0.363, 20.099, 0.000, 0.000);
	    }
		case 579:
		{
		    AttachVehicle[vehicleid][32] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][32], 0, "DEAD", 140, "Comic Sans MS", 150, 0, -5103070, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, 0.046, -0.596, 1.229, -89.600, 51.100, 0.000);
		    AttachVehicle[vehicleid][33] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][33], 0, "TRAIN", 130, "Comic Sans MS", 100, 0, -5103070, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, -0.276, -1.014, 1.226, -89.600, 67.600, 0.000);
            AttachVehicle[vehicleid][34] = CreateDynamicObject(2662, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][34], 0, 14612, "ab_abattoir_box", "ab_bloodfloor", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, 0.008, 1.664, 0.491, -94.099, 2.699, 4.099);
		    AttachVehicle[vehicleid][35] = CreateDynamicObject(2597, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, -0.000, 2.594, 0.007, 41.099, -89.099, -1.200);
		    AttachVehicle[vehicleid][36] = CreateDynamicObject(2985, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, 0.000, -2.021, 0.360, 0.000, 0.000, -64.400);
		    AttachVehicle[vehicleid][37] = CreateDynamicObject(2842, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][37], 0, 10840, "bigshed_sfse", "ws_corr_metal2", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][37], vehicleid, -0.520, -2.902, 0.265, 63.199, 0.000, 0.000);
		    AttachVehicle[vehicleid][38] = CreateDynamicObject(2842, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][38], 0, 3214, "quarry", "Was_swr_trolleycage", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][38], vehicleid, -0.512, 0.217, 1.249, -49.399, -0.699, 0.000);
		    AttachVehicle[vehicleid][39] = CreateDynamicObject(2260, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 0, 6404, "beafron1_law2", "shingledblue_la", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 1, 6404, "beafron1_law2", "shingledblue_la", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][39], vehicleid, -1.659, -1.925, -0.128, -9.899, -77.200, -89.899);
		    AttachVehicle[vehicleid][40] = CreateDynamicObject(2260, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][40], 0, 6404, "beafron1_law2", "shingledblue_la", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][40], 1, 6404, "beafron1_law2", "shingledblue_la", 0);
   		 	AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][40], vehicleid, 1.659, -1.925, -0.128, -9.899, 77.200, 90.599);
		}
		case 487:
		{
		    AttachVehicle[vehicleid][32] = CreateDynamicObject(19476,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][32], 0, "D34D C0URS3", 120, "Arial", 90, 1, 0xFFAAAAAA, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, 1.061000, -1.780000, 0.400000, 0.000000, 0.000000, 341.199005);
			AttachVehicle[vehicleid][33] = CreateDynamicObject(19848,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, 1.061000, 1.041000, -1.040000, 0.000000, 0.000000, 180.000000);
			AttachVehicle[vehicleid][34] = CreateDynamicObject(1434,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][34], 0, 3629, "arprtxxref_las", "ws_corrugateddoor1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, 0.300000, 0.040000, 1.370000, 90.000000, 0.000000, 90.000000);
			AttachVehicle[vehicleid][35] = CreateDynamicObject(3790,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][35], 0, 1560, "7_11_door", "CJ_CHROME2", 0xFFFFFFFF);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, -1.020000, 0.161000, 1.400000, 0.000000, 0.000000, -90.000000);
			AttachVehicle[vehicleid][36] = CreateDynamicObject(1434,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][36], 0, 3629, "arprtxxref_las", "ws_corrugateddoor1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, -0.300000, 0.040000, 1.370000, 90.000000, 0.000000, -90.000000);
			AttachVehicle[vehicleid][37] = CreateDynamicObject(19848,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][37], vehicleid, -1.061000, 1.041000, -1.040000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][38] = CreateDynamicObject(3790,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][38], 0, 1560, "7_11_door", "CJ_CHROME2", 0xFFFFFFFF);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][38], vehicleid, 1.020000, 0.161000, 1.400000, 0.000000, 0.000000, 270.000000);
			AttachVehicle[vehicleid][39] = CreateDynamicObject(1434,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 0, 3629, "arprtxxref_las", "ws_corrugateddoor1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][39], vehicleid, 0.359000, -1.571000, 0.389000, 90.000000, 0.000000, 71.400002);
			AttachVehicle[vehicleid][40] = CreateDynamicObject(19476,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][40], 0, "D34D C0URS3", 120, "Arial", 90, 1, 0xFFAAAAAA, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][40], vehicleid, -1.056000, -1.780000, 0.400000, 0.000000, 0.000000, -161.199005);
			AttachVehicle[vehicleid][41] = CreateDynamicObject(19476,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][41], 0, "D34D C0URS3", 120, "Arial", 90, 1, 0xFFAAAAAA, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][41], vehicleid, 1.061000, -1.780000, 0.400000, 0.000000, 0.000000, 341.199005);
			AttachVehicle[vehicleid][42] = CreateDynamicObject(1434,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][42], 0, 3629, "arprtxxref_las", "ws_corrugateddoor1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][42], vehicleid, -0.359000, -1.571000, 0.389000, 90.000000, 0.000000, -71.400002);
			AttachVehicle[vehicleid][43] = CreateDynamicObject(19294, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0, 0, -1, STREAMER_OBJECT_SD, STREAMER_OBJECT_DD); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][43], vehicleid, 0.776600, -6.836300, 0.000000, 0.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][44] = CreateDynamicObject(19294, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0, 0, -1, STREAMER_OBJECT_SD, STREAMER_OBJECT_DD); // 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][44], vehicleid, 0.776600, 6.836300, 0.000000, 0.000000, 0.000000, 0.000000);
		}
		case 475:
		{
			AttachVehicle[vehicleid][32] = CreateDynamicObject(1114,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][32], 1, 2772, "airp_prop", "cj_chromepipe", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, 0.047000, 1.671000, -0.356000, 300.000000, 0.000000, 90.000000);
			AttachVehicle[vehicleid][33] = CreateDynamicObject(2660,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][33], 0, "O", 60, "GTAWEAPON3", 140, 0, 0xFF000000, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, 0.130000, -0.320000, 0.710000, 270.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][34] = CreateDynamicObject(19587,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][34], 0, 16098, "des_boneyard", "Was_meshfence", 0xFFFFFFFF);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, 0.000000, 0.565000, 0.448000, -31.700001, 180.000000, 0.000000);
			AttachVehicle[vehicleid][35] = CreateDynamicObject(1114,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][35], 1, 2772, "airp_prop", "cj_chromepipe", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, -0.047000, 1.671000, -0.356000, 300.000000, 0.000000, -90.000000);
			AttachVehicle[vehicleid][36] = CreateDynamicObject(19917,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][36], 0, 65535, "none", "none", 0xFFFFFFFF);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, 0.000000, 1.623000, -0.247000, -3.799000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][37] = CreateDynamicObject(18702,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][37], vehicleid, -0.610000, 0.150000, 0.709000, 270.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][38] = CreateDynamicObject(18702,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][38], vehicleid, 0.610000, 0.150000, 0.709000, 270.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][39] = CreateDynamicObject(2501,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 2
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 1, 2905, "dead_mantxd", "billyblood", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][39], 0, 19962, "samproadsigns", "materialtext1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][39], vehicleid, 0.000000, 2.580000, 0.000000, 270.000000, 90.000000, 0.000000);
			AttachVehicle[vehicleid][40] = CreateDynamicObject(16732,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][40], 0, 1413, "break_f_mesh", "CJ_CORRIGATED", 0xFFCCCCCC);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][40], vehicleid, -0.390000, -0.030000, -0.610000, 270.000000, 0.000000, 0.000000);
			AttachVehicle[vehicleid][41] = CreateDynamicObject(16732,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][41], 0, 1413, "break_f_mesh", "CJ_CORRIGATED", 0xFFCCCCCC);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][41], vehicleid, 0.390000, -0.030000, -0.610000, 270.000000, 0.000000, 0.000000);
		}
		case 522:
		{
		    AttachVehicle[vehicleid][32] = CreateDynamicObject(2891,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][32], 0, 19624, "case1", "cj_case_brown", 0xFFCCCCCC);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][32], vehicleid, -0.106000, 0.057000, 0.280000, 0.000000, 0.000000, 22.900000);
			AttachVehicle[vehicleid][33] = CreateDynamicObject(2891,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 1
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][33], 0, 19624, "case1", "cj_case_brown", 0xFFCCCCCC);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][33], vehicleid, 0.106000, 0.057000, 0.280000, 0.000000, 0.000000, -22.900000);
			AttachVehicle[vehicleid][34] = CreateDynamicObject(2495,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 2
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][34], 1, 2905, "dead_mantxd", "billyblood", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][34], 0, 19962, "samproadsigns", "materialtext1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][34], vehicleid, -0.262000, 0.141000, -0.054000, -98.099998, -21.000000, 58.799000);
			AttachVehicle[vehicleid][35] = CreateDynamicObject(2495,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 2
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][35], 1, 2905, "dead_mantxd", "billyblood", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][35], 0, 19962, "samproadsigns", "materialtext1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][35], vehicleid, 0.262000, 0.182000, -0.096000, -105.698997, 0.000000, -78.698997);
			AttachVehicle[vehicleid][36] = CreateDynamicObject(362,  0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);// 0
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][36], vehicleid, 0.410000, 0.011000, 0.344000, 0.000000, 27.799000, 90.000000);
		}
	}
	return 1;
}
stock ClassicInstall(vehicleid){
	return vehicleid;
}
stock FuturisticInstall(vehicleid)
{
	switch(GetVehicleModel(vehicleid))
	{
	    case 411://инфа
	    {
	        AttachVehicle[vehicleid][45] = CreateDynamicObject(1006, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 0, 10101, "2notherbuildsfe", "ferry_build14", -1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][45], vehicleid, 0.290, 2.262, 0.060, -13.900, 0.000, 0.000);
		    AttachVehicle[vehicleid][46] = CreateDynamicObject(1006, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 0, 10101, "2notherbuildsfe", "ferry_build14", -1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][46], vehicleid, -0.290, 2.262, 0.060, -13.900, 0.000, 0.000);
		    AttachVehicle[vehicleid][47] = CreateDynamicObject(1006, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][47], 0, 10101, "2notherbuildsfe", "ferry_build14", -1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][47], vehicleid, 0.290, 2.027, 0.117, -5.899, 0.000, 0.000);
		    AttachVehicle[vehicleid][48] = CreateDynamicObject(1006, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][48], 0, 10101, "2notherbuildsfe", "ferry_build14", -1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][48], vehicleid, -0.290, 2.027, 0.117, -5.899, 0.000, 0.000);
		    AttachVehicle[vehicleid][49] = CreateDynamicObject(1006, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][49], 0, 10101, "2notherbuildsfe", "ferry_build14", -1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][49], vehicleid, 0.290, 1.701, 0.151, -5.899, 0.000, 0.000);
		    AttachVehicle[vehicleid][50] = CreateDynamicObject(1006, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][50], 0, 10101, "2notherbuildsfe", "ferry_build14", -1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][50], vehicleid, -0.290, 1.701, 0.151, -5.899, 0.000, 0.000);
		    AttachVehicle[vehicleid][51] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][51], 0, "33", 130, "Impact", 199, 1, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][51], vehicleid, 0.000, -0.119, 0.674, -90.699, 2.599, -177.300);
		    AttachVehicle[vehicleid][52] = CreateDynamicObject(19327, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][52], 0, "NSX", 140, "Arial", 160, 0, -16777216, 0, 1);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][52], vehicleid, 0.000, -1.920, 0.248, -85.199, 0.000, 0.000);
		}
		case 463:
		{
            AttachVehicle[vehicleid][45] = CreateDynamicObject(19559, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 0, 14802, "lee_bdupsflat", "USAflag", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][45], vehicleid, 0.000, -1.091, 0.099, -49.299, 0.000, 0.000);
		    AttachVehicle[vehicleid][46] = CreateDynamicObject(19319, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][46], vehicleid, 0.052, -1.170, 0.292, -44.499, 31.500, 0.000);
		}
		case 451:
		{
			AttachVehicle[vehicleid][45] = CreateDynamicObject(2422, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 0, 16640, "a51", "Metal3_128", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 1, 1692, "moregenroofstuff", "solar_panel_1", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 2, 1692, "moregenroofstuff", "solar_panel_1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][45], vehicleid, -0.101, -0.220, 0.489, 0.000, -2.599, 0.000);
			AttachVehicle[vehicleid][46] = CreateDynamicObject(2422, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 0, 16640, "a51", "Metal3_128", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 1, 1692, "moregenroofstuff", "solar_panel_1", 0);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 2, 1692, "moregenroofstuff", "solar_panel_1", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][46], vehicleid, 0.635, -0.230, 0.461, 0.000, 2.899, 0.000);
			AttachVehicle[vehicleid][47] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][47], 1, 8423, "pirateship01", "tislandwall04_64", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][47], vehicleid, -0.733, 1.301, -0.361, 0.000, 86.699, 0.000);
			AttachVehicle[vehicleid][48] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][48], 1, 8423, "pirateship01", "tislandwall04_64", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][48], vehicleid, 0.733, 1.301, -0.361, 0.000, -86.699, 0.000);
			AttachVehicle[vehicleid][49] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][49], 1, 8423, "pirateship01", "tislandwall04_64", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][49], vehicleid, 0.735, -1.691, -0.321, 0.000, -86.699, 0.000);
			AttachVehicle[vehicleid][50] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			SetDynamicObjectMaterial(AttachVehicle[vehicleid][50], 1, 8423, "pirateship01", "tislandwall04_64", 0);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][50], vehicleid, -0.734, -1.691, -0.351, 0.000, 86.699, 0.000);
			AttachVehicle[vehicleid][51] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][51], vehicleid, -0.993, -1.757, -0.458, 0.000, 95.799, 179.099);
			AttachVehicle[vehicleid][52] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][52], vehicleid, 0.993, -1.757, -0.458, 0.000, -95.799, -179.099);
			AttachVehicle[vehicleid][53] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][53], vehicleid, -0.990, 1.476, -0.464, 178.600, 95.799, -179.099);
			AttachVehicle[vehicleid][54] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][54], vehicleid, 0.990, 1.476, -0.464, 178.600, -95.799, 179.099);
		}
		case 429:
		{
		   // new banshfunt[10];
		    AttachVehicle[vehicleid][45] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 1, 1259, "billbrd", "ws_oldpainted2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 2, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][45], 3, 1259, "billbrd", "ws_oldpainted2", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][45], vehicleid, -0.758, 1.562, -0.315, 3.100, 84.999, 0.700);
		    AttachVehicle[vehicleid][46] = CreateDynamicObject(2422, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 0, 16640, "a51", "Metal3_128", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 1, 1692, "moregenroofstuff", "solar_panel_1", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][46], 2, 1692, "moregenroofstuff", "solar_panel_1", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][46], vehicleid, 0.236, -1.938, 0.280, 0.000, -3.299, -179.599);
		    AttachVehicle[vehicleid][47] = CreateDynamicObject(2422, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][47], 0, 16640, "a51", "Metal3_128", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][47], 1, 1692, "moregenroofstuff", "solar_panel_1", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][47], 2, 1692, "moregenroofstuff", "solar_panel_1", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][47], vehicleid, -0.746, -1.933, 0.250, 0.000, 3.299, 179.599);
		    AttachVehicle[vehicleid][48] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][48], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][48], 1, 1259, "billbrd", "ws_oldpainted2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][48], 2, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][48], 3, 1560, "7_11_door", "CJ_CHROME2", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][48], vehicleid, 0.758, 1.562, -0.315, 3.100, -84.999, -0.700);
		    AttachVehicle[vehicleid][49] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][49], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][49], 1, 1259, "billbrd", "ws_oldpainted2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][49], 2, 1560, "7_11_door", "CJ_CHROME2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][49], 3, 1560, "7_11_door", "CJ_CHROME2", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][49], vehicleid, 0.758, -1.562, -0.315, -3.100, -84.999, 0.700);
		    AttachVehicle[vehicleid][50] = CreateDynamicObject(19061, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][50], 0, 14581, "ab_mafiasuitea", "barbersmir1", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][50], 1, 1259, "billbrd", "ws_oldpainted2", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][50], 2, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0);
		    SetDynamicObjectMaterial(AttachVehicle[vehicleid][50], 3, 1560, "7_11_door", "CJ_CHROME2", 0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][50], vehicleid, -0.768, -1.562, -0.316, -3.100, 84.999, -0.700);
		    AttachVehicle[vehicleid][51] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][51], vehicleid, 1.072, 1.731, -0.299, -0.299, -86.499, -1.199);
		    AttachVehicle[vehicleid][52] = CreateDynamicObject(1114,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][52], vehicleid, -1.072, 1.731, -0.299, -0.299, 86.499, 1.199);
		    AttachVehicle[vehicleid][53] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][53], vehicleid, -1.073, -1.741, -0.299, 0.299, 86.499, 174.599);
		    AttachVehicle[vehicleid][54] = CreateDynamicObject(1114, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][54], vehicleid, 1.073, -1.741, -0.299, 0.299, -86.499, -174.599);
		}
	}
	return 1;
}
stock CyberpunkInstall(vehicleid){
	return vehicleid;
}
stock FutureTaxiInstall(vehicleid)
{
    switch(GetVehicleModel(vehicleid))
	{
  		case 411:
		{
    	    AttachVehicle[vehicleid][55] = CreateDynamicObject(19308,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
    	    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][55], vehicleid, 0.000, 0.000, 0.779, 0.000, 0.000, -92.499);
		}
		case 541:
		{
    		AttachVehicle[vehicleid][55] = CreateDynamicObject(19308,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
    		AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][55], vehicleid, -0.005, -0.160, 0.720, 0.000, 0.000, -92.199);
		}
		case 415:
		{
		    AttachVehicle[vehicleid][55] = CreateDynamicObject(19308,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][55], vehicleid, -0.038, -0.388, 0.710, 0.000, 0.000, 86.899);
		}
		case 579:
		{
    		AttachVehicle[vehicleid][55] = CreateDynamicObject(19308,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
    		AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][55], vehicleid, 0.003, -0.200, 1.320, 0.000, 0.000, 91.000);
			AttachVehicle[vehicleid][56] = CreateDynamicObject(19327, 0.000000, 0.000000, -1000.000000, 0.000000, 0.000000, 0.000000, 0, 0, -1, STREAMER_OBJECT_SD, 150.0); // 1
		    SetDynamicObjectMaterialText(AttachVehicle[vehicleid][56], 0, "- 666 -", 130, "Ariel", 47, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][56], vehicleid, 0.000000, -2.717000, 0.672000, -26.698999, 0.000000, 0.000000);
			AttachVehicle[vehicleid][57] = CreateDynamicObject(19327, 0.000000, 0.000000, -1000.000000, 0.000000, 0.000000, 0.000000, 0, 0, -1, STREAMER_OBJECT_SD, 150.0); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][57], 0, "ЗВОНИТЕ ПО НОМЕРУ", 130, "Ariel", 20, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][57], vehicleid, 0.000000, -2.642000, 0.814000, -23.799999, 0.000000, 0.000000);
			AttachVehicle[vehicleid][58] = CreateDynamicObject(19327, 0.000000, 0.000000, -1000.000000, 0.000000, 0.000000, 0.000000, 0, 0, -1, STREAMER_OBJECT_SD, 150.0); // 1
			SetDynamicObjectMaterialText(AttachVehicle[vehicleid][58], 0, "FAKE TAXI", 130, "Ariel", 34, 1, 0xFFFFFFFF, 0, 1);
			AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][58], vehicleid, 0.000000, -2.596000, 0.903000, -27.600000, 0.000000, 0.000000);
		}
		case 560:
		{
		    AttachVehicle[vehicleid][55] = CreateDynamicObject(19308,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
		    AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][55], vehicleid, 0.000, 0.070, 0.930, 0.000, 0.000, 89.499);
		}
		case 495:
		{
            AttachVehicle[vehicleid][55] = CreateDynamicObject(19308,0.0,0.0,-1000.0,0.0,0.0,0.0,0,0,-1,300.0,300.0);
            AttachDynamicObjectToVehicle(AttachVehicle[vehicleid][55], vehicleid, -0.004, -0.511, 1.120, 0.000, 0.000, -90.499);
	    }
	}
	return 1;
}
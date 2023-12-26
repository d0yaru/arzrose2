#include <a_samp>
#include <streamer>
#include <Pawn.CMD>
#include <YSF>
#include <a_mysql>
#include <sscanf2>
#include <mxINI>

#define COLOR_VALIK 					0x73B461FF
#define COLOR_ORANGE 					0xFAAC58FF
#define COLOR_GREEN 					0x42B02CFF
#define COLOR_GOLD          			0xFFD700FF
#define COLOR_RED 						0xBE2D2DFF
#define COLOR_BLUENEW 					0xB8CEF6FF
#define COLOR_YELLOW					0xFFFF00FF

#define COLOR_LIME 						0x10F441FF
#define COLOR_GREY 						0xAFAFAFFF

#define SCM                             SendClientMessage
#define void:%0(%1) forward%0(%1); public%0(%1)
new str_1[4096];
#define f format
public OnFilterScriptInit()
{
	CreateDynamic3DTextLabel("Эдвард ( Торговец подарками )\n{FFFFFF}Чтобы поговорить нажми ALT",COLOR_VALIK,1420.4176,-1685.8624,13.5469,15.0);
    CreateDynamic3DTextLabel("Микрофон\n{FFFFFF}[Включен]",COLOR_VALIK,-575.7592,2568.7976,1702.5029,5.0);
	CreateDynamic3DTextLabel("Майкл\n{FFFFFF}Чтобы поговорить нажми ALT\n\n{94B0C1}Квестовый персонаж",COLOR_VALIK,1324.0098,287.2829,20.0452,10.0);
	CreateDynamic3DTextLabel("Нейтон\n{73B461}Нажмите: {FFFFFF}ALT\nСемейный гид", -1, 1800.4841, 409.9243, 20.2294, 5.0);
	CreateDynamic3DTextLabel("Эмилио\n{73B461}Поговорить: {FFFFFF}ALT", -1, -256.7696, -1362.8536, 9.4421, 5.0);
    CreateDynamic3DTextLabel("Лари\n{73B461}Поговорить: {FFFFFF}ALT", -1, 523.8312, 848.2282, -42.9189, 5.0);
	CreateDynamic3DTextLabel("Игорь ( помощник )\n{FFFFFF}Чтобы поговорить нажми ALT",COLOR_VALIK,-2572.6401,-1374.8634,1500.7570,10.0);
	CreateDynamic3DTextLabel("Дарвин\nКоллекционер черепов\n{FFFFFF}Поговорить: ALT\nМагазин мото-товаров: Посигнальте!", COLOR_VALIK, -2201.2429,-2340.7310,30.6250,5.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0,0, -1, -1);
	CreateDynamic3DTextLabel("Мартин\n( Мероприятие: Собиратели )\nНажмите: {ffffff}ALT",COLOR_VALIK,-2263.4514,177.9965,35.3056,10.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, 0, -1, -1);
	CreateDynamic3DTextLabel("Оливия ({f7d83f}101{FFFFFF})\n\n\n\nХочет играть в кости:\n{f7d83f}/dice 101 ставка",-1,2240.2773,1443.1298,1008.7850,10.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, 2, -1, -1);
	CreateDynamic3DTextLabel("Александр\nЛетный инструктор\n{cccccc}Чтобы поговорить нажмите\nALT", COLOR_VALIK, 1664.7694,1433.6664,10.7905, 6.0);
	CreateDynamic3DTextLabel("{FFFFFF}Встаньте на пикап чтобы войти/выйти", COLOR_GREY, -809.5127, 2799.1362, 1501.9896, 3.0);
	CreateDynamicPickup(1318, 23,649.3248,-1353.8834,13.5470,-1);
	CreateDynamicPickup(1318, 23,-575.709, 2594.2, 1705.09,-1);
    CreateDynamic3DTextLabel("Выход: ALT", -1, -575.709, 2594.2, 1705.09, 15.0);
	CreateDynamic3DTextLabel("Топ Благотворителей", -1, -2682.5276,796.4670,1501.0259, 5.0);
	Create3DTextLabel("Шлагбаум.\nСтоимость проезда: {99CC00}100$\n{FFFFFF}Открыть:{99CC00} H", 0xFFFFFFFFFFFFFFFF, 74.2893, -1537.2153, 5.2658, 15.0000, 0, 0);
	Create3DTextLabel("Шлагбаум.\nСтоимость проезда: {99CC00}100$\n{FFFFFF}Открыть:{99CC00} H", 0xFFFFFFFFFFFFFFFF, 33.1439, -1518.4615, 5.1322, 15.0000, 0, 0);
	Create3DTextLabel("Шлагбаум.\nСтоимость проезда: {99CC00}100$\n{FFFFFF}Открыть:{99CC00} H", 0xFFFFFFFFFFFFFFFF, 1800.3562, 821.9110, 10.6911, 15.0000, 0, 0);
	Create3DTextLabel("Шлагбаум.\nСтоимость проезда: {99CC00}100$\n{FFFFFF}Открыть:{99CC00} H", 0xFFFFFFFFFFFFFFFF, 1792.7839, 800.3730, 11.1323, 15.0000, 0, 0);
    CreateDynamic3DTextLabel("Центральный рынок Los Santos\n/trade - Продать/обменять.",-1,1129.0319, -1469.6064, 15.7481, 20.00000);
	CreateDynamic3DTextLabel("Мастерская по установке номеров\nСтоимость установки номера: {26A6D0}5000$ .\nЕсли вы получили разрешение на установку, тогда:\n{26A6D0}Посигнальте для продолжения.", -1, 217.2211, -228.2586, 1.7786, 3.0);
	CreatePickup(1559, 1,-2052.71, -106.53, 35.06, -1); //Автошкола
    CreateDynamic3DTextLabel("Улица\n{9EFA93}Посигнальте чтобы открыть ворота",-1,-2052.71, -106.53, 36.00,4.0);
    CreatePickup(1559, 1,-2052.90, -98.77, 34.90, -1); //Автошкола
    CreateDynamic3DTextLabel("Двор автошколы\n{9EFA93}Посигнальте чтобы открыть ворота",-1,-2052.90, -98.77, 36.00,4.0);
	CreatePickup(19132, 1, 286.17, -30.55, 1001.52, -1); //tir
	CreatePickup(19132, 1, 286.08, -29.09, 1001.52, -1); //tir
	CreatePickup(19422, 1, 286.1845, -24.4473, 1001.5156, -1); //tir
	CreatePickup(1239, 1, 2562.8530,1047.8685,1036.4784, -1); //tir
	CreatePickup(1239, 1, 1849.8380,2030.0278,1016.9329, -1); //tir
	CreatePickup(1239, 1, 2625.5911,1175.6143,1038.1116, -1); //tir
	CreatePickup(1239, 1, 1091.0118,945.1588,1600.9935, -1); //tir
	// подвал
	CreateDynamic3DTextLabel("{3CE658}Информация\n{AFAFAF}[Настройка]: {FFFFFF}ALT", 0x73B461FF, 2562.8530,1047.8685,1036.4784, 3.000000);
	CreateDynamic3DTextLabel("{3CE658}Информация\n{AFAFAF}[Настройка]: {FFFFFF}ALT", 0x73B461FF, 1849.8380,2030.0278,1016.9329, 3.000000);
	CreateDynamic3DTextLabel("{3CE658}Информация\n{AFAFAF}[Настройка]: {FFFFFF}ALT", 0x73B461FF, 2625.5911,1175.6143,1038.1116, 3.000000);
	CreateDynamic3DTextLabel("{3CE658}Информация\n{AFAFAF}[Настройка]: {FFFFFF}ALT", 0x73B461FF, 1091.0118,945.1588,1600.9935, 3.000000);
	// подвал
	CreateDynamic3DTextLabel("Наушники, необходимо надеть перед стрельбой!\n{4DB33D}Нажмите: {FFFFFF}ALT", COLOR_GREY, 286.1845, -24.4473, 1001.5156, 3.0);
	CreateDynamic3DTextLabel("Выход из Тира\n{D0C857}Нажмите: ALT", -1, 286.08, -29.09, 1001.52, 3.0);
	CreateDynamic3DTextLabel("ТИР\nСтоимость входа без пропуска в тир: {4DB33D}500${FFFFFF}\n[{D0C857}Оружие можно купить внутри!{FFFFFF}]\n{4DB33D}Нажмите: {FFFFFF}ALT", -1, 286.17, -30.55, 1001.52, 3.0);
	CreatePickup(1581, 1, -462.1329,2213.2871,1601.0859, -1);
	CreateDynamic3DTextLabel("Получение номеров\nНажмите: ALT.\nСтоимость: {DA5D40}от 10 000$.", -1, -462.1329,2213.2871,1601.0859, 3.0);
	CreateDynamic3DTextLabel("Отдел коммерции\n{FFFFFF}ALT",COLOR_GREEN,363.6908,153.9987,1025.7964,3.0);
	CreateDynamic3DTextLabel("Отдел недвижимости\n{FFFFFF}ALT",COLOR_GREEN,354.0459,170.0928,1025.7964,3.0);
    CreatePickup(1248, 23, -569.7514,2567.4849,1702.5029,-1);
    CreateDynamic3DTextLabel("Управление мероприятием\n{FFFFFF}ALT",COLOR_GREEN,-569.7514,2567.4849,1702.5029,3.0);
	CreatePickup(1274, 23, -398.3770,2229.9397,1801.0859,-1);
	CreateDynamic3DTextLabel("Магазин аксессуаров\n{FFFFFF}ALT",COLOR_GREEN,-398.3770,2229.9397,1801.0859,3.0);
	CreateDynamic3DTextLabel("Автомат с бесплатной едой\n{FFFFFF}ALT",COLOR_GREEN,-1349.3528,493.8062,11.1953,3.0);
	CreatePickup(1279, 1,-1691.2605,867.8833,1005.0170,-1);
	CreateDynamic3DTextLabel("{D64444}Автомастерская{BC7272}\n\nЕсли транспорт не тюнингуется, отправляйтесь в другой салон.\nИспользуйте GPS чтобы найти его.",COLOR_RED,1041.3918,-1028.2256,32.1016,8.0);
	CreateDynamic3DTextLabel("{D64444}Автомастерская{BC7272}\n\nЕсли транспорт не тюнингуется, отправляйтесь в другой салон.\nИспользуйте GPS чтобы найти его.",COLOR_RED,2645.0007,-2037.3738,13.5540,8.0);
	CreateDynamic3DTextLabel("{D64444}Автомастерская{BC7272}\n\nЕсли транспорт не тюнингуется, отправляйтесь в другой салон.\nИспользуйте GPS чтобы найти его.",COLOR_RED,-1935.7690,235.5206,34.3125,8.0);
	CreateDynamic3DTextLabel("{D64444}Автомастерская{BC7272}\n\nЕсли транспорт не тюнингуется, отправляйтесь в другой салон.\nИспользуйте GPS чтобы найти его.",COLOR_RED,-2714.4827,217.3856,4.2921,8.0);
	CreateDynamic3DTextLabel("ДЕМОРГАН: - Тюрьма для читеров и нарушителей рп процесса.\nДля того чтобы с нее выйти , дождитесь окончания времени.\nПри следующих нарушениях, вас могут забанить.\n{E66E6E}В вашем паспорте, добавлено новое примечание.", COLOR_GREY, -803.2662, 2833.1062, 1501.9896, 25.0);
	CreateDynamic3DTextLabel("Джереми\n{FFFFFF}Чтобы поговорить нажми ALT\n\n{94B0C1}Квестовый персонаж",COLOR_VALIK,1773.6903,-1891.7493,13.5504,15.0);
	CreateDynamic3DTextLabel("Федерико\n{FFFFFF}Чтобы поговорить нажми ALT\n\n{94B0C1}Квестовый персонаж",COLOR_VALIK,1158.9291,-1751.8055,13.5848,15.0);
	CreatePickup(2358,23,154.3891,1903.3417,18.7570, -1);
    CreatePickup(2358,23,141.1707,1875.4081,17.8434, -1);
    CreatePickup(2358,23,115.3891,1875.2244,17.8359, -1);
    CreatePickup(2358,23,117.9125,1871.2745,17.8359, -1);
    CreatePickup(2358,23,141.1704,1875.4607,17.8434, -1);
    CreatePickup(2358,23,137.3782,1879.5315,17.8359, -1);
    CreatePickup(2358,23,202.5459,1861.9189,13.1406, -1);
    CreatePickup(2358,23,193.3672,1931.5112,17.6406, -1);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,154.3891,1903.3417,18.7570,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,141.1707,1875.4081,17.8434,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,115.3891,1875.2244,17.8359,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,117.9125,1871.2745,17.8359,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,137.3782,1879.5315,17.8359,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,202.5459,1861.9189,13.1406,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,193.3672,1931.5112,17.6406,3.0);
    CreateDynamic3DTextLabel("Бесплатная лицензия",COLOR_GREY,-2034.2344,-114.1020,1035.1719,4.0);
 	CreatePickup(2358,23,2798.11, -2393.91, 13.96, -1);
    CreatePickup(2358,23,2743.82, -2453.84, 13.86, -1);
    CreatePickup(2358,23,2782.68, -2372.74, 13.63, -1);
    CreatePickup(2358,23,-1325.6866,476.3579,7.8498, -1);
    CreatePickup(2358,23,-1294.9114,491.5177,11.1953, -1);
    CreatePickup(2358,23,-1291.1442,501.8154,11.1953, -1);
    CreatePickup(2358,23,-1397.9807,502.8033,11.3047, -1);
	Create3DTextLabel("Выход\n{ffffff}[ ALT ]", 0xFFFFFFFFFFFF00FF, 1517.4783, 1436.0298, 10.9406, 10.0000, 0, 0);
	CreatePickup(19132, 23, 1517.4783, 1436.0298, 10.9406, -1);
	Create3DTextLabel("Центр обмена имуществом\n{ffffff}[ ALT ]", 0xFFFFFFFFFFFF00FF, 1288.0322, 315.8082, 19.5547, 10.0000, 0, 0);
	CreatePickup(19132, 23, 1288.0322, 315.8082, 19.5547, -1);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,-1325.6866,476.3579,7.8498,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,-1294.9114,491.5177,11.1953,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,-1291.1442,501.8154,11.1953,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,-1397.9807,502.8033,11.3047,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,2798.11, -2393.91, 13.96,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,2743.82, -2453.84, 13.86,3.0);
    CreateDynamic3DTextLabel("Склад ингредиентов\n[ALT]",COLOR_GREY,2782.68, -2372.74, 13.63,3.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-166.9772,1347.3783,1500.9888,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-208.6039,1323.4382,1500.9888,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-208.6047,1327.2102,1500.9888,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-210.7849,1329.7562,1500.9888,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-212.6879,1334.1384,1500.9888,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-208.9196,1334.1351,1500.9888,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-187.4157,1305.7438,1507.6416,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-194.7263,1305.7531,1507.6416,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-180.6385,1299.5883,1507.6770,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-183.1053,1299.8328,1507.6770,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-186.0829,1297.2595,1507.6692,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-190.7337,1296.8057,1507.6692,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-193.2607,1298.5358,1507.6692,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-194.5027,1296.8018,1507.6692,2.0);
	CreateDynamic3DTextLabel("Компьютер для редакции объявлений\n{73B461}[ALT]",-1,-197.0397,1298.5365,1507.6692,2.0);
	CreateDynamic3DTextLabel("INFO",-1,-38.9923,173.5192,2.4297,7.0);
	CreateDynamic3DTextLabel("INFO",-1,-83.2843,-302.1633,2.7646,7.0);
	CreateDynamic3DTextLabel("INFO",-1,1969.3076,-1981.4128,13.5469,7.0);
	CreateDynamic3DTextLabel("INFO",-1,1460.8505,-1743.3596,13.5469,7.0);
	CreateDynamic3DTextLabel("Получение банковской карты\n{B03131}Необходимо иметь 1 000$", 0xFFFFFFFFFFFFFFFF, 1504.7090, 1271.7426, 10.9908, 4.0000);
	CreatePickup(1277, 1, 1504.7090, 1271.7426, 10.9908, -1);
	CreateDynamic3DTextLabel("Получение банковской карты\n{B03131}Необходимо иметь 1 500$",-1,951.6823,2451.9871,1601.9871,4.0);
	CreateDynamic3DTextLabel("Стол для игры в кости\n{B03131}/dice",-1,2238.0413,1443.3271,1008.8525,3.0);
	CreatePickup(1239, 23,2095.9922,797.1262,1027.1211, -1);
    CreatePickup(1239, 1,-2657.75, 808.67, 1500.97, -1);
    CreateDynamic3DTextLabel("Должники",-1,-2657.75, 808.67, 1500.97,7.0);
	CreateDynamic3DTextLabel("Начать сдачу на права\n{F9AD43}ALT",-1,-2575.90, -1364.63, 1500.76,4.0);
	CreateDynamic3DTextLabel("Начать сдачу на права\n{F9AD43}ALT",-1,-2573.83, -1361.87, 1500.76,4.0);
	CreateDynamic3DTextLabel("Начать сдачу на права\n{F9AD43}ALT",-1,-2575.87, -1358.94, 1500.76,4.0);
	CreateDynamic3DTextLabel("Начать сдачу на права\n{F9AD43}ALT",-1,-2579.94, -1358.94, 1500.76,4.0);
    CreateDynamic3DTextLabel("Благотворительный фонд\n[ALT]",COLOR_GOLD,2095.9922,797.1262,1027.1211,4.0);
	CreateDynamic3DTextLabel("Пройти собеседование\n[ALT]",COLOR_GOLD,-2033.4341,-117.5292,1035.1719,4.0);
	CreatePickup(1314, 23,-2033.4341,-117.5292,1035.1719, -1);
	
 	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 657.975525, -1247.840454, 1024.391846, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 658.823914, -1262.348389, 1024.391846, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 675.5417,-1262.4751,1024.3898, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 595.748230, -1184.252930, 1001.384888, 3.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\nВне машины",COLOR_BLUENEW,2719.6982,-2405.0554,13.4609,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\nВне машины",COLOR_BLUENEW,2719.8486,-2504.0205,13.4937,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\nВне машины",COLOR_BLUENEW,286.3304,1821.4232,17.6406,10.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\nВне машины",COLOR_BLUENEW,135.0717,1941.9005,19.3203,10.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\nВне машины",COLOR_BLUENEW,-1631.3796,687.7377,7.1875,15.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,454.9670,872.7173,1500.9648,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,465.7021,871.5269,1500.9648,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,465.6787,857.2242,1500.9648,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,474.4485,859.8665,1500.9648,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-2582.5913,-1384.5138,1500.7570,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-1786.3673,-1998.2512,1500.7853,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-1772.5034,-1995.5537,1500.7853,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-1758.3375,-1998.2037,1500.7853,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-2067.2576,2693.9587,1501.0243,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-2062.6360,2693.8945,1500.9766,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-2067.2607,2705.4763,1500.9766,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-2062.6340,2705.4880,1500.9766,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-2690.0815,807.0168,1500.9688,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,2325.9783,78.6801,1501.9962,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,2325.9753,81.0722,1501.9962,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,2364.5027,96.0364,1502.0103,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,1588.5164,-1637.7506,13.4311,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,2330.9561,67.0544,1501.9962,5.0);
	CreateDynamic3DTextLabel("Открыть\n\n{FFFFFF}H", COLOR_ORANGE, -1354.1853, -0.5061, 1601.0859, 5.0);
	CreateDynamic3DTextLabel("Открыть\n\n{FFFFFF}H", COLOR_ORANGE, -1354.1929, 24.6202, 1601.0859, 5.0);
	CreateDynamic3DTextLabel("Открыть\n\n{FFFFFF}H", COLOR_ORANGE, -1320.5623, 22.9350, 1601.0859, 5.0);
	CreateDynamic3DTextLabel("Открыть\n\n{FFFFFF}H", COLOR_ORANGE, -1320.5485, 1.3281, 1601.0859, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 1490.3296,-1281.2520,113.8064, 5.0, -1, -1, 0, 3);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 1996.4331,1138.1451,1038.6882, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 1996.3802,1109.2860,1038.6882, 5.0);
	//FBI
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-759.9789,2345.5117,1401.0869,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-752.3966,2343.8923,1401.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-750.7892,2345.8018,1401.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-750.8912,2358.6047,1401.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-743.0435,2358.5906,1401.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-743.0309,2345.7905,1401.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-750.9784,2345.7463,1404.5170,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-750.8091,2358.6155,1404.5170,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-743.0408,2345.7729,1404.5170,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-743.1991,2358.5151,1404.5170,5.0);
	// армия сф
	CreateDynamic3DTextLabel("{F78E4A}Открыть\n\n{FFFFFF}H",COLOR_BLUENEW,-244.2207,790.7653,1500.9608,5.0);
	// армия лв
	CreateDynamic3DTextLabel("{F78E4A}Открыть\n\n{FFFFFF}H",COLOR_BLUENEW,1441.5416,2219.1206,1501.1494,5.0);
	CreateDynamic3DTextLabel("{F78E4A}Открыть\n\n{FFFFFF}H",COLOR_BLUENEW,1418.8348,2219.0439,1501.1494,5.0);
	// полиция двери
 	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\n\n{FFFF00}Доступно адвокатам",COLOR_BLUENEW,-459.6262,2206.0317,1601.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-465.5919,2195.0361,1601.0859,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-472.0311,2201.4885,1601.0879,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-476.8023,2204.1382,1601.0928,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-480.6641,2202.7195,1601.0928,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-472.0273,2191.9602,1601.0879,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-470.5664,2189.8884,1601.0898,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H",COLOR_BLUENEW,-470.5032,2186.6431,1601.0898,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\n\n{FFFF00}Доступно адвокатам",COLOR_BLUENEW,-461.1063,2187.6240,1601.0840,5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H\n\n{FFFF00}Доступно адвокатам",COLOR_BLUENEW,-461.0601,2178.2202,1601.0879,5.0);

	
	Create3DTextLabel("Лифт {A2EB53}мерии{FFFFFF}\nНажмите: {A2EB53}ALT", 0xFFFFFFFFFFFFFFFF, 1489.7209,-1259.7783,113.8044, 7.0, 3, 0);
    Create3DTextLabel("Лифт {A2EB53}мерии{FFFFFF}\nНажмите: {A2EB53}ALT", 0xFFFFFFFFFFFFFFFF, 1509.3090,1088.1893,1033.8420, 7.0, 2, 2);
    Create3DTextLabel("Лифт {A2EB53}мерии{FFFFFF}\nНажмите: {A2EB53}ALT", 0xFFFFFFFFFFFFFFFF, 1999.9298,1121.5593,1038.6824, 7.0, 2, 2);
    CreateDynamic3DTextLabel("1 Этаж {99CC00}Больницы{FFFFFF}\nНажмите: {99CC00}ALT", -1, 638.197021, -1239.710449, 1024.391846, 8.0);
    CreateDynamic3DTextLabel("Черный выход\n{FFFFFF}ALT", -1, 644.591125, -1234.206421, 1024.391846, 5.0);
    CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 657.975525, -1247.840454, 1024.391846, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 658.823914, -1262.348389, 1024.391846, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 675.5417,-1262.4751,1024.3898, 5.0);
	CreateDynamic3DTextLabel("{A19D9D}Открыть\n{FFFFFF}H", -1, 595.748230, -1184.252930, 1001.384888, 3.0);
	CreateDynamic3DTextLabel("2 этаж {99CC00}Больницы{FFFFFF}\nНажмите: {99CC00}ALT", -1, 1155.955688, -1296.993530, 1019.413879, 8.0);
	CreateDynamic3DTextLabel("Столовая {99CC00}Больницы{FFFFFF}\nНажмите: {99CC00}ALT", -1, 1120.565186, -1311.100952, 1019.411926, 8.0);
	CreateDynamic3DTextLabel("{C5FF46}Лучшие сотрудники:{FFFFFF}\n- -\n -\n -\n -\n -\n -\n -\n -\n -\n -\n\n{C5FF46}Лучшие сотрудники сегодня:{FFFFFF}\n- -\n -\n -\n -\n -\n -\n -\n -\n -\n -\n", 0xFFFFFFFF, 1167.946777, -1301.989624, 1021.270508, 9.0);
	CreateDynamic3DTextLabel("Буфет", -1, 1147.487793, -1544.051270, 1010.305725, 5.0);
	CreateDynamic3DTextLabel("Выход в {99CC00}Больницу{FFFFFF}\nНажмите: {99CC00}ALT", -1, 1123.963501, -1533.590820, 1010.296326, 8.0);

	CreatePickup(1314, 1, -741.5166,2360.1128,1404.5170,-1);
	CreateDynamic3DTextLabel("Press Alt",COLOR_BLUENEW,-741.5166,2360.1128,1404.5170,2.0);

	CreatePickup(1240,1,2363.9543,-1958.5900,1601.0859,-1);
    CreateDynamic3DTextLabel("Церковь\nДля того чтобы пожениться вам нужен сотрудник мэрии\nНеобходимо приобрести кольца /gps - Важные места - Покупка колец\nДля развода введите [/unwedding (4 000$!)]",COLOR_GOLD,2363.9543,-1958.5900,1601.0859,10.0);
    CreatePickup(1274,23,1979.9426,-1971.1410,13.5825, -1);
    CreateDynamic3DTextLabel("Генеральный офис\nНалоговой службы",COLOR_BLUENEW,1530.7826,-1074.1027,25.0625,10.0);
    CreatePickup(1275,23,195.1261,-228.0334,1.7749, -1);
    CreateDynamic3DTextLabel("Раздевалка\nALT",COLOR_BLUENEW,195.1261,-228.0334,1.7749,8.0);
    CreatePickup(1275,23,2126.2717,896.7686,10.9149, -1);
    CreateDynamic3DTextLabel("Раздевалка\nALT",COLOR_BLUENEW,2126.2717,896.7686,10.9149,8.0);
	CreatePickup(1275,23,2271.7771,1438.6256,1008.8250,-1);
    CreateDynamic3DTextLabel("Раздевалка\n{FFFFFF}ALT",COLOR_ORANGE,2271.7771,1438.6256,1008.8250,8.0);
    CreatePickup(1550,23,2271.7996,1440.5249,1008.8320,-1);
    CreateDynamic3DTextLabel("Зарплата\n{FFFFFF}ALT",COLOR_ORANGE,2271.7996,1440.5249,1008.8320,8.0);
	CreatePickup(1274,23,2250.7593,1466.8921,1008.8050,-1);
    CreateDynamic3DTextLabel("Обменник.\nПокупка игровых фишек (для игры в костях и автоматах)\n\nНажмите: {FFFFFF}ALT",COLOR_VALIK,2250.7593,1466.8921,1008.8050,8.0);
    CreateDynamic3DTextLabel("Выбор работы",COLOR_BLUENEW,208.4846,-225.6056,1.7749,8.0);
    CreatePickup(1239,23,208.4846,-225.6056,1.7749,-1);
    CreateDynamic3DTextLabel("Выбор работы",COLOR_BLUENEW,2111.5618,894.6057,10.9149,8.0);
    CreatePickup(1239,23,2111.5618,894.6057,10.9149,-1);
	CreatePickup(1275,23,770.8220,-77.3209,1000.6563,-1);
	CreatePickup(1275,23,681.4680,-1652.4188,871.2896,-1);
	CreateDynamic3DTextLabel("Раздевалка\nALT",COLOR_BLUENEW,770.8220,-77.3209,1000.6563,8.0);
	CreateDynamic3DTextLabel("Раздевалка\nALT",COLOR_BLUENEW,681.4680,-1652.4188,871.2896,8.0);
	CreateDynamic3DTextLabel("Нажмите N",COLOR_BLUENEW,2042.6489,-1958.4153,14.3989,2.0);
	CreateDynamic3DTextLabel("Нажмите N",COLOR_BLUENEW,2033.5723,-1958.2524,14.3989,2.0);
	CreatePickup(1239,23,-2576.86, -1356.78, 1500.76,-1);
    CreateDynamic3DTextLabel("ПДД\n{73B461}Нажмите ALT чтобы прочитать.",-1,-2576.86, -1356.78, 1500.76,5.0);
    CreateDynamic3DTextLabel("Покупка обручальных\nКолец",COLOR_GOLD,2520.0012,918.5114,11.0234,5.0);
    CreateDynamic3DTextLabel("Подать объявление\n{73B461}Используйте: /ad", -1, -190.1970,1338.4086,1500.9823, 3.0);
	CreateDynamic3DTextLabel("Начать {99CC00}бесплатное{FFFFFF} лечение.\nНажмите: ALT!", -1, 1152.203979, -1303.613525, 1019.990723, 4.0);
	CreateDynamic3DTextLabel("Трудоустройство\nна работу\n{FF6347}Фермера!", -1, -77.9217,90.3327,3.1172+0.5, 3.0);
	CreateDynamic3DTextLabel("Охранник\nНажмите: {FFFFFF}ALT",COLOR_VALIK,644.0786,-1365.4963,13.6142,10.0);
	CreatePickup(1581, 1,-77.9217,90.3327,3.1172,-1);
	CreateDynamic3DTextLabel("Спресованый транспорт\nПосигнальте для загрузки метaла!", -1, 1124.2776,1962.4742,10.8203, 20.0);
	CreateDynamic3DTextLabel(" Раздевалка \n[ALT] ",-1,1907.0087,153.0604,17.5156,10.0);
	CreatePickup(1275, 23, 1907.0087,153.0604,17.5156,-1);
	CreateDynamic3DTextLabel(" Раздевалка \n[ALT] ",-1,1980.1283,-1968.4868,13.5825,4.0);
	CreatePickup(1275, 23, 1980.1283,-1968.4868,13.5825,-1);
    CreateDynamic3DTextLabel(" Трудоустройство \n Работа: Грузчик\n[ALT] ",-1,1979.9426,-1971.1410,13.5825,4.0);
    CreateDynamic3DTextLabel("Начать раздачу для {99CC00}Малоимущих{F0F0F0}\nНажмите: {99CC00}ALT", -1, 2108.4661, 789.3922, 1027.1191, 3.0);
    CreateDynamic3DTextLabel(!"Сдача с повинной",-1,-463.8000,2217.0959,1601.0859,5.0);
    CreateActor(17, 1773.4927,-1900.1550,13.5508,65.6255);
	CreateDynamic3DTextLabel("{AFAFAF}Вступление во фракцию\nНажмите ALT", -1, 1773.4927,-1900.1550,13.5508, 5.0, INVALID_VEHICLE_ID, INVALID_PLAYER_ID);
	CreateActor(285, 1150.1951,-1751.7898,13.5847,222.7685);
	CreateDynamic3DTextLabel("{AFAFAF}Вступление во фракцию\nНажмите ALT", -1, 1150.1951,-1751.7898,13.5847, 5.0, INVALID_VEHICLE_ID, INVALID_PLAYER_ID);
	CreateDynamic3DTextLabel("Свалка Las-Venturas", COLOR_GREY,111.0156,1073.1621,13.6094, 20.0);
	CreateDynamic3DTextLabel("Свалка Лос-Сантос", COLOR_GREY,2180.7395,-1990.5044,13.5469, 20.0);
	CreateDynamic3DTextLabel("Свалка San Fierro", COLOR_GREY,-1867.2306,-1669.6919,21.7500, 20.0);
	CreateDynamic3DTextLabel("Встаньте на пикап чтобы выйти из банка", -1, -2168.3958,-928.2313,1701.0859, 7.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, 1);
	CreateDynamic3DTextLabel(" Пункт выдачи пиццы ",0xD05050FF,670.8947,-1575.9595,14.2514,4.0);
	CreateDynamic3DTextLabel(" Пункт выдачи пиццы ",0xD05050FF,1752.4005,2214.5081,10.8203,4.0);
	CreateDynamic3DTextLabel(" Трудоустройство \n Работа: Развозчик Пиццы\n[ALT] ",-1,1746.6765,2246.2012,10.8203,4.0);
	CreateDynamic3DTextLabel(" Трудоустройство \n Работа: Развозчик Пиццы\n[ALT] ",-1,665.9875,-1576.6426,14.4777,4.0);
	CreateDynamic3DTextLabel(" Раздевалка \n Работа: Развозчик Пиццы\n[ALT] ",-1,1749.0339,2246.2012,10.8203,4.0);
	CreateDynamic3DTextLabel(" Раздевалка \n Работа: Развозчик Пиццы\n[ALT] ",-1,668.0192,-1576.7659,14.4074,4.0);
	CreatePickup(1274,23,665.9875,-1576.6426,14.4777,-1);
	CreatePickup(1274,23,1746.6765,2246.2012,10.8203,-1);
	CreatePickup(1275, 23, 668.0192,-1576.7659,14.4074, -1);
	CreatePickup(1275, 23, 1749.0339,2246.2012,10.8203, -1);
	CreateDynamic3DTextLabel(" Раздевалка \n\n{FFFFFF}Встаньте на пикап чтобы переодеться", COLOR_LIME, 2568.0,-1281.5,1044.12, 7.0);
	CreatePickup(2663, 1, 589.6020,1420.4148,1900.7980,-1);
	CreateDynamic3DTextLabel("Столовая\nALT",-1,589.6020,1420.4148,1900.7980,4.0);
	CreatePickup(2663, 1, 485.50, 867.03, 1500.96,-1);
	CreatePickup(2663, 1, -1349.3669,493.8840,11.1953,-1);
	CreateDynamic3DTextLabel(" Раздевалка \n\n{FFFFFF}Работа инкассатора",0x10F441FF,-2678.46851, 796.50763, 1501.0,7.0);
	CreateDynamic3DTextLabel(" Раздевалка \n\n{FFFFFF}Работа инкассатора", 0x10F441FF, 1518.5939, 1288.3005, 10.9808, 3.0000);
	CreateDynamic3DTextLabel(" Раздевалка \n\n{FFFFFF}Работа инкассатора",0x10F441FF,948.5161,2447.8325,1601.9871,3.0);
	CreatePickup(1581, 23, 1537.1251, 1112.4895, 1033.8420,-1);
	CreateDynamic3DTextLabel("Список заключенных",-1,1550.7634,-1681.3251,13.5540,5.0);
	CreateDynamic3DTextLabel("Банк Los Santos {33AA33}[Открыт]\n{FFFFFF}Встаньте на пикап чтобы войти в банк",-1,1481.055,-1772.040,18.796, 5.0);
	CreateDynamic3DTextLabel(" Бар",-1,2270.3950,1444.5238,1008.8250,7.0);
	CreateDynamic3DTextLabel("{F5DEB3}[{FFFFFF} Орёл и Решка {00ff00}(На Вирты){F5DEB3}]{FFFFFF}\n{AFAFAF}/orel [ид] [сумма]\n\t{FFFFFF}или\n{AFAFAF}/reshka [ид] [сумма]{FFFFFF}\n\n{F5DEB3}[{FFFFFF} Орёл и Решка {ff0000}(На Евро){F5DEB3}]{FFFFFF}\n{AFAFAF}/e_orel [ид] [сумма]\n\t{FFFFFF}или\n{AFAFAF}/e_reshka [ид] [сумма]{FFFFFF}",-1,506.2321,-69.8461,999.6721,6.0);
	CreateDynamic3DTextLabel("{F5DEB3}[{FFFFFF} Орёл и Решка {00ff00}(На Вирты){F5DEB3}]{FFFFFF}\n{AFAFAF}/orel [ид] [сумма]\n\t{FFFFFF}или\n{AFAFAF}/reshka [ид] [сумма]{FFFFFF}\n\n{F5DEB3}[{FFFFFF} Орёл и Решка {ff0000}(На Евро){F5DEB3}]{FFFFFF}\n{AFAFAF}/e_orel [ид] [сумма]\n\t{FFFFFF}или\n{AFAFAF}/e_reshka [ид] [сумма]{FFFFFF}",-1,-2654.4612,1427.0135,907.3604,6.0);
	CreateDynamic3DTextLabel("{F5DEB3}[{FFFFFF} Орёл и Решка {00ff00}(На Вирты){F5DEB3}]{FFFFFF}\n{AFAFAF}/orel [ид] [сумма]\n\t{FFFFFF}или\n{AFAFAF}/reshka [ид] [сумма]{FFFFFF}\n\n{F5DEB3}[{FFFFFF} Орёл и Решка {ff0000}(На Евро){F5DEB3}]{FFFFFF}\n{AFAFAF}/e_orel [ид] [сумма]\n\t{FFFFFF}или\n{AFAFAF}/e_reshka [ид] [сумма]{FFFFFF}",-1,496.5649,-16.8896,1001.1519,6.0);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,-2683.9232, 807.4161, 1500.9094,5);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,-2676.5600, 807.4161, 1500.9094,5);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,-2669.0400, 807.4161, 1500.9094,5);
    CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,-2666.4729, 805.8691, 1500.9094,5);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,-2666.4665, 799.2879, 1500.9094,5);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N", 0xFFFFFFFFAFAFAFFF, 1519.1604, 1270.7262, 11.0067, 5.0000);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N", 0xFFFFFFFFAFAFAFFF, 1519.2792, 1273.6433, 11.0067, 5.0000);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N", 0xFFFFFFFFAFAFAFFF, 1525.6399, 1277.0123, 11.0067, 5.0000);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N", 0xFFFFFFFFAFAFAFFF, 1522.7191, 1277.0123, 11.0067, 5.0000);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,951.8005,2458.6746,1601.9771,5);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,954.9710,2463.5288,1601.9771,5);
	CreateDynamic3DTextLabel("{73B461}Касса\n{FFFFFF}N",0xFFFFFFFFAFAFAFFF,946.6893,2456.3723,1601.9771,5);
	CreateDynamic3DTextLabel(" Закусочная \n\n{9ACD32}Встаньте на чекпоинт чтобы перекусить", -1, 1082.0736, 992.7753, 1600.9989, 20.0);
	CreateDynamic3DTextLabel("Буфет", -1, -1772.6299, -2005.3392, 1500.9670, 20.0);
	CreateDynamic3DTextLabel("Буфет", -1, -2039.4053,2673.7039,1500.9670,20.0);
	CreateDynamic3DTextLabel("Автомат с едой", -1, -2581.7578, -1370.5360, 1501, 20.0);
	CreateDynamic3DTextLabel("Автомат с едой", -1, 1170.7358,-1317.6544,1019.4160, 20.0);
	CreateDynamic3DTextLabel("Автомат с едой",-1,1484.8135,-1771.4929,18.7929,20.0);
	CreateDynamic3DTextLabel("Автомат с едой",-1,1484.8135,-1771.4929,18.7929,20.0);
	CreateDynamic3DTextLabel("Автомат с едой",-1,-171.1462,1334.3427,1500.9788,20.0);
	Create3DTextLabel("Буфет", -1, 1501.7886, -1247.8163, 113.8103, 20.0, 3, 0);

	CreateDynamic3DTextLabel("Амуниция\nИспользуйте: ALT", -1, 295.20001220703, -38.299999237061, 1001.5, 10.0);
	CreateDynamic3DTextLabel("Покупка {99CC00}цветов\n{FFFFFF}Стоимость: {99CC00}1200$", -1, 2350.7820,-1961.5228,1601.0859, 10.0);
	CreateDynamic3DTextLabel("Прыжки с парашютом\n{FFFFFF}ALT", COLOR_GREY, -1409.4084, -298.2005, 14.1484, 5.0);
	CreateDynamic3DTextLabel("Студия: 'Arizona SHOW'\n{FFFFFF}ALT", COLOR_GREY, 2154.7354, 1493.4109, 10.8203, 5.0);
	CreateDynamic3DTextLabel("Прыжки с парашютом\n{FFFFFF}ALT", COLOR_GREY, 1673.0103, 1447.5935, 10.7867, 5.0);
	CreateDynamic3DTextLabel("Информация для {99CC00}посетителей {FFFFFF}больницы.\nНажмите: ALT", -1, 1152.191406, -1305.585938, 1019.990723, 3.0);
	CreateDynamic3DTextLabel("Прыжки с парашютом\n{FFFFFF}ALT", COLOR_GREY, 1451.6128, -2285.0105, 13.5469, 5.0);
	CreateDynamic3DTextLabel("Курс обучения\n{FFFFFF}ALT",COLOR_GREEN,1773.2142, -1888.9938, 13.5513,3.0);
	CreateDynamic3DTextLabel("Курс обучения\n{FFFFFF}ALT",COLOR_GREEN,2210.1968,-1149.0828,25.7458, 3.0);
	CreateDynamic3DTextLabel("Спуститься на 1 этаж\n{73B461}Используйте: {FFFFFF}ALT", -1, -1312.6182, 20.8936, 1597.6073 + 1.0, 3.0);
	CreateDynamic3DTextLabel("Лестница на {99CC00}1 {FFFFFF}этаж.", -1, -1317.3761, 12.1050, 1601.0859 + 2.2, 3.0);
	CreateDynamic3DTextLabel("Касса\n{FFFFFF}ALT", COLOR_VALIK, 665.9590, -567.7969, 1700.7394, 10.0);
	CreateDynamic3DTextLabel("Войти в дом\n{FFFFFF}ALT", COLOR_GREY, 1079.0709, 937.4053, 1604.8663, 5.0);
	CreateDynamic3DTextLabel("Войти в дом\n{FFFFFF}ALT", COLOR_GREY, 2544.3186,1037.9677,1039.9091, 5.0);
	CreateDynamic3DTextLabel("Войти в дом\n{FFFFFF}ALT", COLOR_GREY, 2628.4084,1183.2872,1041.5614, 5.0);
	CreateDynamic3DTextLabel("Войти в дом\n{FFFFFF}ALT", COLOR_GREY, 1850.2095,2049.4343,1020.2127, 5.0);
	CreateDynamic3DTextLabel("Управление экономикой.\n{FFFFFF}ALT", COLOR_GREEN, -2053.2688,2697.6201,1500.9766, 5.0);
	CreateDynamic3DTextLabel("Центральный рынок\n{9CCF00}Парковать {FFFFFF}авто на улице, запрещено!\nВо избежания нежелательных штрафов, используйте\nПодземный паркинг!", -1, 1113.5651, -1412.7012, 13.5743 + 1.2, 10.0);
    CreatePickup(1239, 1, 1113.5651, -1412.7012, 13.5743, -1);
    CreateDynamic3DTextLabel("Черный вход\n{FFFFFF}ALT", COLOR_GREY, 1473.2888,-1262.4442,14.5625+1.0, 5.0);
	CreateDynamic3DTextLabel("Бар",-1,497.4280,-75.7883,998.7578,20.0);
	CreateDynamic3DTextLabel("Бар",-1,499.7772,-20.6834,1000.6797,20.0);
	CreateDynamic3DTextLabel("Бар",-1,-2653.8188,1407.3539,906.2734,20.0);
	CreateDynamic3DTextLabel(" Бар",-1,784.6830, 2514.6926, 1501.9751,7.0);
	CreateDynamic3DTextLabel(" Бар",-1,461.3756,209.5736,3194.6460,7.0);
	Create3DTextLabel("Абрахам ( Торговец AZ Coins )\n{FFFFFF}Чтобы поговорить нажми ALT", 0x73B461FF, 1110.7767, -1423.8966, 15.7969, 15.0000, 0, 0);
	Create3DTextLabel("Милтон\n{FFFFFF}Чтобы поговорить нажми ALT\n\n{c7c7c7}Розыгрыш аксессуаров!", 0x73B461FF, 1129.1080, -1433.9572, 15.7969, 4.0000, 0, 0);
	CreateDynamic3DTextLabel("{958989}Магазин 24/7\n{FFFFFF}Нажми: N для покупок",-1,2580.1340,1424.8770,1800.9688, 10.0);
	CreatePickup(1274, 1, 2580.1340,1424.8770,1800.9688,-1);
	CreatePickup(1239, 1, 1471.7279, -1271.7294, 113.8103, 3);
	Create3DTextLabel("Дополнительная информация\n{FFFFFF}ALT", 0xAFAFAFFF, 1531.3999, 1112.4895, 1033.8420, 5.0000, 2, 0);
    CreateDynamic3DTextLabel("Казино: {73B461}4 Dragons\n{FFFFFF}Для входа необходимо 500$\nНажмите:{73B461} ALT",-1,2019.32,1007.7,10.8203,9.0);
    CreateDynamicPickup(19132,1,2019.32,1007.7,10.8203,-1);
    CreateDynamicPickup(19132,1,2190.8975,1465.6576,1008.7850,-1);
    CreateDynamic3DTextLabel("Выход\nНажмите:{FFFFFF} ALT",COLOR_VALIK,2190.8975,1465.6576,1008.7850,9.0);
	CreateDynamicMapIcon(2461.4653, 2245.1494, 10.8203, 12, 0, -1, -1, -1, 300.0);//жк аватнаж
	CreateDynamicMapIcon(-2050.9949, 450.4646, 35.1719, 12, 0, -1, -1, -1, 300.0);//жк ультра
	CreateDynamicMapIcon(2497.0403,-1670.8518,12.9654, 62, 0, -1, -1, -1, 300.0);//Grove street
	CreateDynamicMapIcon(2786.0085,-1616.5608,10.5467, 60, 0, -1, -1, -1, 300.0);//Los Santos Vagos
	CreateDynamicMapIcon(2181.1194,-1799.4424,12.9900, 58, 0, -1, -1, -1, 300.0);//Varrios Los Aztecas
	CreateDynamicMapIcon(2520.6709,-2010.6217,13.1715, 61, 0, -1, -1, -1, 300.0);//Rifa
	CreateDynamicMapIcon(2352.7537, -2333.7805, 14.6157, 51, 0, -1, -1, -1, 300.0);//Truck
	CreateDynamicMapIcon(1533.7008,-1014.1130,24.0538, 55, 0, -1, -1, -1, 300.0);//Аренда транспорта
	CreateDynamicMapIcon(611.0340,-585.7634,17.2266, 30, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2456.1079,503.9311,30.0781, 30, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1592.1372,715.8721,-5.2422, 30, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2447.9407,-1962.9333,13.5469, 37, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1177.9343,-1323.6394,14.0952, 22, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1530.7826,-1074.1027,25.0625, 25, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(875.805541, -1565.014892, 13.533462, 6, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(875.805541, -1565.014892, 13.533462, 6, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1495.4197,-1282.6329,14.5525, 19, 0, -1, -1, -1, 300.0);//
    CreateDynamicMapIcon(1119.98, -1492.96, 15.80, 56, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2240.7681,577.8632,35.1719, 37, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1879.1533,-860.3239,32.0234, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2143.0383,-930.0509,32.0234, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1545.2085,451.3773,7.0315, 46, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1814.4722,-1995.8588,13.5544, 23, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2286.6912,-2012.8440,13.5447, 23, 0, -1, -1, -1, 300.0);//
 	CreateDynamicMapIcon(2333.4478,-1922.6251,12.2991, 23, 0, -1, -1, -1, 300.0);//
 	CreateDynamicMapIcon(2175.9934,-1503.9364,23.9520, 23, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1967.2424,296.3922,35.2325, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2579.4302,310.0845,5.1797, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2455.7710,799.5222,35.1797, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1757.8055,964.1265,24.8906, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2487.1482,369.5434,35.1219, 16, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1941.4008,459.7771,35.1719, 12, 0, -1, -1, -1, 300.0);//
    CreateDynamicMapIcon(2473.1699,-1422.2638,28.8397, 39, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1694.5833,951.9144,24.8906, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2718.4712,50.4521,4.3359, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2241.7515,123.0408,35.3203, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(667.8604, -1571.3179, 15.2623, 29, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1746.7703, 2227.1057, 11.2029, 29, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2102.4863,2257.4006,11.0234, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2802.8872,2430.6565,11.0625, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2200.9714,1393.5470,10.8203, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2049.5845,2486.0862,11.0781, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1731.8141,1888.1255,10.8203, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2240.7698,2047.4966,11.0625, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-35.9494,1172.1107,19.4280, 55	, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-69.1524,92.9972,3.1172, 11, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2478.1455,-1476.8624,23.7989, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(906.2801,-1221.0192,16.9766, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1614.1479,2320.8289,10.8203, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1976.6429,-2029.5635,13.5469, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1054.8196,2134.8713,10.8203, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1708.7831,1606.9760,9.8767, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(150.9107,-1812.6412,3.7416, 9, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(387.7626, 2539.7524, 16.9433, 36, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2427.6968,1662.9028,10.8203, 36, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2485.4040527344,2506.73046875,10.8203125, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2375.5674,2306.3022,8.1406, 52, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(253.2157,1838.9449,17.6568, 46, 0, -1, -1, -1, 600.0);//
	CreateDynamicMapIcon(2637.8018,1185.2871,10.8203, 12, 0, -1, -1, -1, 600.0);//
	CreateDynamicMapIcon(2287.0254,2432.3618,10.8203, 30, 0, -1, -1, -1, 600.0);//
	CreateDynamicMapIcon(2735.6653,-2448.3457,13.6432, 46, 0, -1, -1, -1, 600.0);//
	CreateDynamicMapIcon(2092.6499,2493.1968,14.8390, 54, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1168.6149,1364.8787,10.8125, 19, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1839.62, 138.98, 15.20, 19, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1607.4197,1815.2408,10.8203, 22, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2111.5618,894.6057,10.9149, 27, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(178.4099,1101.4073,16.4498, 11, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(276.6597,1396.0018,10.4786, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2823.4900,914.6848,10.6434, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2258.0461,2765.0706,10.7141, 16, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2201.7358,-2226.7476,13.4103, 16, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2861.2329,1279.8409,11.4040, 38, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1762.3525,-1898.5516,13.4879, 38, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2229.3896,-1159.9827,25.8025, 38, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1971.0687,140.6956,27.6873, 38, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(180.7734, -108.8047, 0.6484, 38, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(206.5538,-231.0065,1.7749, 27, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2225.6599,-1724.1580,13.5621, 54, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(321.3462,-29.1380,1.5781, 19, 0, -1, -1, -1, 300.0);//
  	CreateDynamicMapIcon(2180.7395,-1990.5044,13.5469, 11, 0, -1, -1, -1, 300.0);//
    CreateDynamicMapIcon(-1864.7662,-1668.6857,21.7500, 11, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1481.1355,-1769.7352,18.7958, 52, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1542.5132,-1675.6295,13.5546, 30, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2169.4517,-1675.1003,15.0859, 23, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2245.0801,-1662.6428,15.4690, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2040.3796,-114.5223,35.2579, 36, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2668.8684,640.1640,14.4531, 22, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2756.1284,375.9151,4.3338, 19, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-220.9060,-234.7779,1.4219, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2136.0205,-77.7463,35.3203, 40, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1289.0641,-1271.5160,13.5400, 19, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1988.3429,-1984.5186,13.6663, 11, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(457.6003,-1501.4500,31.0383, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(694.5242,-498.0038,16.3359, 45, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1654.3445,-1657.2205,22.5156, 12, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1041.3918,-1028.2256,32.1016, 27, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2645.0007,-2037.3738,13.5540, 27, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1935.7690,235.5206,34.3125, 27, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2714.4827,217.3856,4.2921, 27, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1802.6573, 407.1559, 20.2294, 12, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-256.7696, -1362.8536, 9.4421, 56, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(523.8312, 848.2282, -42.9189, 56, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2192.7070, 993.6327, 80.0000, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2154.3425,644.6054,52.3672, 37, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1449.6135, -2284.7063, 13.5469, 5, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1409.4084, -298.2005, 14.1484, 5, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1673.0103, 1447.5935, 10.7867, 5, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(1866.0593, -1394.1477, 13.4955, 55, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2154.7354, 1493.4109, 10.8203, 33, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2956.5833, -1971.8005, 3.5868, 9, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-71.1408, 1223.8297, 19.6863, 38, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2463.4805, 131.7678, 35.1719, 43, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(2491.4995,918.3869,11.0234, 21, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-2071.5891,-2445.5686,30.7183, 51, 0, -1, -1, -1, 300.0);//
	CreateDynamicMapIcon(-1703.9647,785.6906,25.7360, 52, 0, -1, -1, -1, 300.0);//
    CreateDynamicMapIcon(1791.5549,-1294.7230,13.5107, 38, 0, -1, -1, -1, 300.0);//
	CreatePickup(1314, 23, 1474.5449, -1266.0454, 113.8103, 3);//выборы
	CreatePickup(1314, 23, 1478.9395, -1266.2124, 113.8103, 3);//планировка дома
	CreatePickup(1239, 23, 1794.3065, 413.8255, 20.2294, -1);//parking жк
	Create3DTextLabel("[ {ffffff}Семейный автопарк {D45B5B}]\n\n{cccccc}Нажмите ALT", 0xFFFFFFFFD45B5BFF, 1794.3065, 413.8255, 20.2294, 10.0000, 0, 0);  
	Create3DTextLabel("Строительная {99CC00}информация{FFFFFF}\nНажмите: {99CC00}ALT", 0xFFFFFFFF, 1471.9293, -1268.2134, 114.8103, 6.0000, 3, 0);
	Create3DTextLabel("Голосовать\n\n[ALT]", 0xAFAFAFFF, 1474.5449, -1266.0454, 114.8103, 3.0000, 3, 0);
	Create3DTextLabel("Перепланировка дома\n\n[ALT]", 0xAFAFAFFF, 1478.9395, -1266.2124, 114.8103, 3.0000, 3, 0);
	Create3DTextLabel("[ {ffffff}Консультант по вопросам фермы{31B404}]\n{cccccc}Нажмите ALT", 0x31B404FF, 1471.7279, -1271.7294, 113.8103, 4.0000, 3, 0);
	Create3DTextLabel("Подать жалобу\n{FFFFFF}ALT", 0xAFAFAFFF, 1479.8489, -1272.7487, 114.8064, 5.0000, 3, 0);
	Create3DTextLabel("Кнопка для вызова полиции\nНажмите:{FFFFFF} ALT", 0xFF6347FF, 1485.9387, -1281.4032, 113.8064, 1.5000, 3, 0);
	Create3DTextLabel("Чтобы внести изменения\n{FFFFFF}Нажмите ALT", 0xFFFF00FF, 1488.5703, -1271.0889, 113.8064, 2.0000, 3, 0);
	//fam LV
	Create3DTextLabel("[ Шкаф ]\nЧтобы заглянуть\n{EACA86}Нажмите ALT", 0xFFFFFFFFFFFFFFFF, 1453.9591, -1050.8584, 1602.0072, 12.0000, 0, 1);
	CreatePickup(1317, 1, 1453.9591, -1050.8584, 1600.2072, -1);
	Create3DTextLabel("[ {ffffff}Семейный автопарк {D45B5B}]\n\n{cccccc}Нажмите ALT", 0xFFFFFFFFD45B5BFF, 2504.7102, 2242.5874, 10.8203, 10.0000, 0, 0);
	CreatePickup(1239, 23, 2504.7102, 2242.5874, 10.8203, -1);
	Create3DTextLabel("Вертолётная площадка\n\n{ffffff}Нажмите ALT", 0xFFFFFFFFFFFF00FF, 2472.4045, 2244.8181, 10.8203, 15.0000, 0, 0);
	CreatePickup(19132, 23, 2472.4045, 2244.8181, 10.8203, -1);	
	Create3DTextLabel("Спуск вниз\n\n{ffffff}Нажмите ALT", 0xFFFFFFFFFFFF00FF, 2444.6194, 2287.6719, 91.6300, 15.0000, 0, 0);
	CreatePickup(19132, 23, 2444.6194, 2287.6719, 91.6300, -1);
	CreateDynamicPickup(19133, 23, 1487.6162, 1519.0647, 1601.0859, 10, 207);
	CreateDynamicPickup(19133, 23, 1487.5302, 1519.0012, 1604.6797, 10, 207);
	CreateDynamicPickup(19133, 23, 1487.4905, 1519.0012, 1608.2207, 10, 207);
	CreateDynamicPickup(19133, 23, 1487.4507, 1519.0012, 1611.7803, 10, 207);	
	//fam SF
	Create3DTextLabel("[ {ffffff}Семейный автопарк {D45B5B}]\n\n{cccccc}Нажмите ALT", 0xFFFFFFFFD45B5BFF, -2017.0059, 445.0810, 35.1723, 10.0000, 0, 0);
	CreatePickup(1239, 23, -2017.0059, 445.0810, 35.1723, -1);
	Create3DTextLabel("Вертолётная площадка\n\n{ffffff}Нажмите ALT", 0xFFFFFFFFFFFF00FF, -2061.5591, 463.5475, 35.1719, 15.0000, 0, 0);
	CreatePickup(19132, 23, -2061.5591, 463.5475, 35.1719, -1);
	Create3DTextLabel("Спуск вниз\n\n{ffffff}Нажмите ALT", 0xFFFFFFFFFFFF00FF, -2055.9150, 455.0196, 139.6406, 15.0000, 0, 0);
	CreatePickup(19132, 23, -2055.9150, 455.0196, 139.6406, -1);
	Create3DTextLabel("[ Шкаф ]\nЧтобы заглянуть\n{EACA86}Нажмите ALT", 0xFFFFFFFFFFFFFFFF, -1217.4670, 2358.0420, 1500.9866, 12.0000, 0, 1);
	CreatePickup(1317, 1, -1217.4670, 2358.0420, 1499.1865, -1);
	//
    CreatePickup(19132, 23, -2188.8364,-2344.5261,30.6250, -1); //фикс warlock mc
    CreatePickup(1239, 23, -505.0940, 2597.6277, 53.5557, -1);
	Create3DTextLabel("Купить видеокарту\n\n{cccccc}Нажмите ALT", 0xFFFFFFFFFFFF00FF, 1384.2760, -21.8199, 1000.9229, 10.0000, 0, 0);
	CreatePickup(1239, 23, 1384.2760, -21.8199, 1000.9229, -1);
	CreateDynamic3DTextLabel("[ Обзор всех видеокарт ]\nНажмите ALT", 0xFFFFFFFFAFAFAFFF, -1649.3934, -246.4758, 14.1484, 5.0);
	CreateDynamic3DTextLabel("[ Управление видеокартами ]\nНажмите ALT", 0xFFFFFFFFAFAFAFFF, -1650.4478, -244.2418, 14.1484, 2.0);
	CreateDynamic3DTextLabel("[ Управление видеокартами ]\nНажмите ALT", 0xFFFFFFFFAFAFAFFF, -1652.4283, -244.2435, 14.1484, 2.0);
	CreateDynamic3DTextLabel("Чтобы улучшить видеокарту,\nиспользуйте её у стола\nчерез инвентарь", 0xFFFFFFFFAFAFAFFF, -1653.0421, -249.0098, 14.1484, 5.0000);
	CreateDynamic3DTextLabel("[ Управление видеокартами ]\nНажмите ALT", 0xFFFFFFFFAFAFAFFF, -1654.4594, -244.2415, 14.1484, 2.0);
	CreateDynamic3DTextLabel("[ Управление видеокартами ]\nНажмите ALT", 0xFFFFFFFFAFAFAFFF, -1656.4078, -244.2418, 14.1484, 2.0);
	CreateDynamic3DTextLabel("[ Выход ]\nНажмите ALT", 0xFFFFFFFFAFAFAFFF, -1662.1874, -246.4930, 14.1484, 20.0);
	CreateDynamic3DTextLabel("[ Управление видеокартами ]\nНажмите ALT",0xFFFFFFFFAFAFAFFF,-1658.4623, -244.2459, 14.14845, 2.0);
	//
	Create3DTextLabel("Чтобы разгрузить фургон\nили поставить транспорт\n{FFFFFF}Посигнальте", 0x42B02CFF, 2499.2410, 2240.6580, 10.8552, 15.0000, 0, 0);//lv
	Create3DTextLabel("Чтобы разгрузить фургон\nили поставить транспорт\n{FFFFFF}Посигнальте", 0x42B02CFF, 1829.8459,417.0724,20.2119, 15.0000, 0, 0);//ls
	Create3DTextLabel("Чтобы разгрузить фургон\nили поставить транспорт\n{FFFFFF}Посигнальте", 0x42B02CFF, -2055.7095,469.4046,35.2430, 15.0000, 0, 0);//sf
    //Пикапы в гараже
	CreateDynamicPickup(19133, 1, 2347.0840,2905.7847,1600.2864, -1); //1 Класс выход из гаража в дом
	CreateDynamic3DTextLabel(!"{afafaf}Вход в дом\n{ffffff}ALT",-1,2347.0840,2905.7847,1600.2864,8.0); // 1 Класс текст выхода из гаража в дом
	CreateDynamicPickup(1239, 1, 950.4846,2147.7935,1004.6840, -1); //1 Класс информационный пикап
	CreateDynamic3DTextLabel(!"{3ce658}Чтобы машина спавнилась в гараже\n{ffffff}Используйте /park в этом месте",-1,950.4846,2147.7935,1004.6840,8.0); // 1 Класс текст информационного пикапа
	CreateDynamicPickup(19133, 1, 2457.6812,2709.5164,1601.0859, -1); //2 Класс выход из гаража в дом
	CreateDynamic3DTextLabel(!"{afafaf}Вход в дом\n{ffffff}ALT",-1,2457.6812,2709.5164,1601.0859,8.0); // 2 Класс текст выхода из гаража в дом
	CreateDynamicPickup(1239, 1, 2295.0439,2782.6174,1601.0859, -1); //2 Класс информационный пикап
	CreateDynamic3DTextLabel(!"{3ce658}Чтобы машина спавнилась в гараже\n{ffffff}Используйте /park в этом месте",-1,2295.0439,2782.6174,1601.0859,8.0); // 2 Класс текст информационного пикапа
	CreateDynamicPickup(19133, 1, 2562.7510,2853.4341,1604.0791, -1); //3 Класс выход из гаража в дом
	CreateDynamic3DTextLabel(!"{afafaf}Вход в дом\n{ffffff}ALT",-1,2562.7510,2853.4341,1604.0791,8.0); // 3 Класс текст выхода из гаража в дом
	CreateDynamicPickup(1239, 1, 1396.0890,2.4989,1000.9191, -1); //3 Класс информационный пикап
	CreateDynamic3DTextLabel(!"{3ce658}Чтобы машина спавнилась в гараже\n{ffffff}Используйте /park в этом месте",-1,1396.0890,2.4989,1000.9191,8.0); // 3 Класс текст информационного пикапа
	CreateDynamicPickup(19133, 1, 1399.3237,-8.9444,1000.9191, -1); //4 Класс выход из гаража в дом
	CreateDynamic3DTextLabel(!"{afafaf}Вход в дом\n{ffffff}ALT",-1,1399.3237,-8.9444,1000.9191,8.0); // 4 Класс текст выхода из гаража в дом
	CreateDynamicPickup(1239, 1, 2579.3989,2850.7642,1604.0791, -1); //4 Класс информационный пикап
	CreateDynamic3DTextLabel(!"{3ce658}Чтобы машина спавнилась в гараже\n{ffffff}Используйте /park в этом месте",-1,2579.3989,2850.7642,1604.0791,8.0); // 4 Класс текст информационного пикапа
	CreateDynamicPickup(19133, 1, 2273.7275,2794.7961,1601.0859, -1); //5 Класс выход из гаража в дом
	CreateDynamic3DTextLabel(!"{afafaf}Вход в дом\n{ffffff}ALT",-1,2273.7275,2794.7961,1601.0859,8.0); // 5 Класс текст выхода из гаража в дом
	CreateDynamicPickup(1239, 1, 2465.8264,2711.5178,1601.0859, -1); //5 Класс информационный пикап
	CreateDynamic3DTextLabel(!"{3ce658}Чтобы машина спавнилась в гараже\n{ffffff}Используйте /park в этом месте",-1,2465.8264,2711.5178,1601.0859,8.0); // 5 Класс текст информационного пикапа
	CreateDynamicPickup(19133, 1, 958.6687,2148.0698,1004.6840, -1); //6 Класс выход из гаража в дом
	CreateDynamic3DTextLabel(!"{afafaf}Вход в дом\n{ffffff}ALT",-1,958.6687,2148.0698,1004.6840,8.0); // 6 Класс текст выхода из гаража в дом
	CreateDynamicPickup(1239, 1, 2356.2437,2901.8464,1600.2864, -1); //6 Класс информационный пикап
	CreateDynamic3DTextLabel(!"{3ce658}Чтобы машина спавнилась в гараже\n{ffffff}Используйте /park в этом месте",-1,2356.2437,2901.8464,1600.2864,8.0); // 6 Класс текст информационного пикапа

    // TRAILER
 	Create3DTextLabel("Трейлер {ff9966}№1\n{ffffff}маленький {ff9966}| {ffffff}$1800000\n\n{ff9966}[ {ffffff}Войти - ALT {ff9966}]", 0xFFFFFFFF, 2352.2046, 2841.8054, 1501.2664, 4.0000, 0, 0);
	CreatePickup(1318, 23, 2352.2046, 2841.8054, 1501.2664, -1);
	Create3DTextLabel("Трейлер {ff9966}№2\n{ffffff}средний {ff9966}| {ffffff}$3500000\n\n{ff9966}[ {ffffff}Войти - ALT {ff9966}]", 0xFFFFFFFF, 2346.8262, 2859.3547, 1501.1156, 4.0000, 0, 0);
	CreatePickup(1318, 23, 2346.8262, 2859.3547, 1501.1156, -1);
	Create3DTextLabel("Трейлер {ff9966}№3\n{ffffff}большой {ff9966}| {ffffff}$3900000\n\n{ff9966}[ {ffffff}Войти - ALT {ff9966}]", 0xFFFFFFFF, 2352.3931, 2855.1487, 1501.0981, 4.0000, 0, 0);
	CreatePickup(1318, 23, 2352.3931, 2855.1487, 1501.0981, -1);
	Create3DTextLabel("Покупка трейлера\n{ff9966}[ {ffffff}ALT {ff9966}]", 0xFFFFFFFF, 2354.2043, 2829.5234, 1500.9688, 4.0000, 0, 0);
	CreatePickup(1239, 23, 2354.2043, 2829.5234, 1500.9688, -1);
	Create3DTextLabel("Гараж/Тюнинг трейлеров\n{ff9966}[ {ffffff}ALT {ff9966}]", 0xFFFFFFFF, -2106.0486, -2418.8145, 30.6250, 8.0000, 0, 0);
	CreatePickup(1239, 23, -2106.0486, -2418.8145, 30.6250, -1);
	CreateDynamic3DTextLabel("Выйти\n{ff9966}[ {ffffff}ALT {ff9966}]", 0xFFFFFFFF, 1334.1860, 1261.1288, 1501.0850, 4.0000);
	CreatePickup(1318, 23, 1334.1860, 1261.1288, 1501.0850, -1);
	CreateDynamic3DTextLabel("Выйти\n{ff9966}[ {ffffff}ALT {ff9966}]", 0xFFFFFFFF, 1313.6605, 1262.3265, 1501.0850, 4.0000);
	CreatePickup(1318, 23, 1313.6605, 1262.3265, 1501.0850, -1);
	CreateDynamic3DTextLabel("Выйти\n{ff9966}[ {ffffff}ALT {ff9966}]", 0xFFFFFFFF, 1290.3165, 1260.6007, 1501.4446, 4.0000);
	CreatePickup(1318, 23, 1290.3165, 1260.6007, 1501.4446, -1);
	CreatePickup(1239, 23, 1093.8259,1522.3159,1716.0868, -1);
	CreateDynamic3DTextLabel("(Улучшение для авто)\n{FFFFFF}Чтобы посмотреть товар нажми ALT", 0x73B461FF, 1093.8259,1522.3159,1716.0868, 5.0);
	CreatePickup(1239, 23, -1658.6539,1210.0825,7.2500, -1);
	CreateDynamic3DTextLabel("Выбрать транспорт для тест-драйва\n{FFFFFF}Нажмите ALT", 0x73B461FF, -1658.6539,1210.0825,7.2500, 5.0);
	//////==============================================
    CreatePickup(1314, 23, 1541.3546, 1644.3098, 10.8203, -1);
    Create3DTextLabel("Прока ( Продавец деталей для тюнинга )\n{FFFFFF}Чтобы посмотреть товар нажми ALT", 0x73B461FF, 1090.1139, 1525.7634, 1717.0868, 5.0000, 254);
    Create3DTextLabel("Ричи\n{73B461}Поговорить: {FFFFFF}ALT", 0xFFFFFFFF, 1771.5164, 424.0565, 20.1436, 5.0000, 0, 0);
    new actor1;
    actor1 = CreateActor(59, 1090.1139, 1525.7634, 1716.0868, 270.0000);
    CreateActor(260, 1771.7130, 424.2505, 20.1436, 122.6339);
    SetActorVirtualWorld(actor1, 254);
    for(new i; i < 2; i++) Create3DTextLabel("Прока ( Продавец деталей для тюнинга )\n{FFFFFF}Чтобы посмотреть товар нажми ALT", 0x73B461FF, 1090.1139, 1525.7634, 1717.0868, 5.0000, 258+i);
    actor1 = CreateActor(59, 1090.1139, 1525.7634, 1716.0868, 270.0000);
    SetActorVirtualWorld(actor1, 258);
    actor1 = CreateActor(59, 1090.1139, 1525.7634, 1716.0868, 270.0000);
    SetActorVirtualWorld(actor1, 259);
    actor1 = CreateActor(34, 2355.8381, 2829.5820, 1500.9688, 81.1987);
	SetActorVirtualWorld(actor1, 0);
	//DB
	new TruckCarSF = 10;
	new TruckCarLS = 10;
	new TruckCarLV = 10;
	new Text3D:TruckCarText[3];
	new gates_truck[3];
	gates_truck[0] = CreateDynamicObject(19912, 2216.825195, -2654.560059, 14.197069, 0.000000, 0.000000, 90.000000, -1, -1, -1, STREAMER_OBJECT_SD, STREAMER_OBJECT_DD); // 2
	SetDynamicObjectMaterial(gates_truck[0], 1, 18996, "mattextures", "safetymesh", 0xFFFFFFFF);
	SetDynamicObjectMaterial(gates_truck[0], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
	Create3DTextLabel("{FB8F4C}Чтобы открыть ворота\nпосигнальте", 0xB8CEF6FF, -2262.4492, 284.7619, 35.3455, 7.0000, 0, 0);
	gates_truck[1] = CreateDynamicObject(19912, -2262.322998, 290.260010, 35.959492, 0.000000, 0.000000, 90.000000, -1, -1, -1, STREAMER_OBJECT_SD, STREAMER_OBJECT_DD); // 2
	SetDynamicObjectMaterial(gates_truck[1], 1, 18996, "mattextures", "safetymesh", 0xFFFFFFFF);
	SetDynamicObjectMaterial(gates_truck[1], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
 	Create3DTextLabel("{FB8F4C}Чтобы открыть ворота\nпосигнальте", 0xB8CEF6FF, 1383.1057, 1139.6630, 10.8616, 7.0000, 0, 0);
	gates_truck[2] = CreateDynamicObject(19912, 1383.284790, 1145.246704, 11.475600, 0.000000, 0.000000, 90.000000, -1, -1, -1, STREAMER_OBJECT_SD, STREAMER_OBJECT_DD); // 2
	SetDynamicObjectMaterial(gates_truck[2], 1, 18996, "mattextures", "safetymesh", 0xFFFFFFFF);
	SetDynamicObjectMaterial(gates_truck[2], 0, 1560, "7_11_door", "CJ_CHROME2", 0);
	CreatePickup(1239, 23, 2167.7141, -2682.6868, 13.6090, -1);
	Create3DTextLabel("Получить загруженный прицеп\n\n{ffffff}[ Посигнальте ]", 0xFFFF00FF, 2167.7141, -2682.6868, 13.6090, 10.0000, 0, 0);
	Create3DTextLabel("Начать работу на личном грузовике\n\n{ffffff}[ Нажмите ALT ]", 0xFFFF00FF, 2202.2417, -2687.2307, 13.5721, 10.0000, 0, 0);
	CreatePickup(1275, 23, 2202.2417, -2687.2307, 13.5721, -1);
	TruckCarText[0] = Create3DTextLabel("Взять грузовик\n\n{ffffff}[ Нажмите ALT ]\n\n{cccccc}(осталось грузовиков: 0)", 0xFFFF00FF, 2198.3994, -2687.2266, 13.5721, 10.0000, 0, 0);
	CreatePickup(1239, 23, 2198.3994, -2687.2266, 13.5721, -1);
	f(str_1, sizeof(str_1), "Взять грузовик\n\n{ffffff}[ Нажмите ALT ]\n\n{cccccc}(осталось грузовиков: %d)",TruckCarLS);
	Update3DTextLabelText(TruckCarText[0],0xFFFF00FF, str_1);
	Create3DTextLabel("Информация о транспорте и грузах\n\n{ffffff}[ Нажмите ALT ]", 0xFFFF00FF, 2193.4353, -2684.9436, 13.5790, 10.0000, 0, 0);
	CreatePickup(1239, 23, 2193.4353, -2684.9436, 13.5790, -1);
	TruckCarText[1] = Create3DTextLabel("Взять грузовик\n\n{ffffff}[ Нажмите ALT ]\n\n{cccccc}(осталось грузовиков: 0)", 0xFFFF00FF, 1364.8639, 1112.5664, 10.8506, 10.0000, 0, 0);
	CreatePickup(1239, 23, 1364.8639, 1112.5664, 10.8506, -1);
	f(str_1, sizeof(str_1), "Взять грузовик\n\n{ffffff}[ Нажмите ALT ]\n\n{cccccc}(осталось грузовиков: %d)",TruckCarLV);
	Update3DTextLabelText(TruckCarText[1],0xFFFF00FF, str_1);
	Create3DTextLabel("Начать работу на личном грузовике\n\n{ffffff}[ Нажмите ALT ]", 0xFFFF00FF, 1368.5862, 1112.5663, 10.8506, 10.0000, 0, 0);
	CreatePickup(1275, 23, 1368.5862, 1112.5663, 10.8506, -1);
	Create3DTextLabel("Информация о транспорте и грузах\n\n{ffffff}[ Нажмите ALT ]", 0xFFFF00FF, 1359.8982, 1114.9072, 10.8575, 10.0000, 0, 0);
	CreatePickup(1239, 23, 1359.8982, 1114.9072, 10.8575, -1);
	CreatePickup(1239, 23, 1334.2722, 1117.3967, 10.8876, -1);
	Create3DTextLabel("Получить загруженный прицеп\n\n{ffffff}[ Посигнальте ]", 0xFFFF00FF, 1334.2722, 1117.3967, 10.8876, 10.0000, 0, 0);
	CreatePickup(1239, 23, -2311.3267, 262.6506, 35.3714, -1);
	Create3DTextLabel("Получить загруженный прицеп\n\n{ffffff}[ Посигнальте ]", 0xFFFF00FF, -2311.3267, 262.6506, 35.3714, 10.0000, 0, 0);
	Create3DTextLabel("Начать работу на личном грузовике\n\n{ffffff}[ Нажмите ALT ]", 0xFFFF00FF, -2276.9592, 257.5841, 35.3345, 10.0000, 0, 0);
	CreatePickup(1275, 23, -2276.9592, 257.5841, 35.3345, -1);
	TruckCarText[2] = Create3DTextLabel("Взять грузовик\n\n{ffffff}[ Нажмите ALT ]\n\n{cccccc}(осталось грузовиков: 0)", 0xFFFF00FF, -2280.7046, 257.5797, 35.3345, 10.0000, 0, 0);
	CreatePickup(1239, 23, -2280.7046, 257.5797, 35.3345, -1);
	f(str_1, sizeof(str_1), "Взять грузовик\n\n{ffffff}[ Нажмите ALT ]\n\n{cccccc}(осталось грузовиков: %d)",TruckCarSF);
	Update3DTextLabelText(TruckCarText[2],0xFFFF00FF, str_1);
	Create3DTextLabel("Информация о транспорте и грузах\n\n{ffffff}[ Нажмите ALT ]", 0xFFFF00FF, -2285.7896, 260.1207, 35.3414, 10.0000, 0, 0);
	CreatePickup(1239, 23, -2285.7896, 260.1207, 35.3414, -1);
	//Атракционы
	CreateDynamicObject(10305, 672.38000, -2276.64990, -18.79000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19129, 664.40997, -2228.10010, 1.08000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19129, 664.46002, -2247.62988, 1.11000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19158, 664.46002, -2237.17993, 1.13000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19001, 647.52002, -2306.52002, 11.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18998, 583.78003, -2262.54004, 6.25000,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19985, 580.01001, -2231.12988, 11.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18998, 478.45001, -2264.46997, -99.35000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19381, -2167.5856, 644.6740, 1051.3146, 0.00, 90.00, 0.00);//int КБ
	CreateDynamicObject(2533, -2165.2695, 644.2663, 1051.3907, 0.00, 0.00, -90.00);//int bear КБ
	CreateDynamicObject(970, 1771.962769, -1939.857666, 13.075600, 360.000000, 360.000000, 302.000000, -1, -1, -1, STREAMER_OBJECT_SD, 100.0); // СПАВН ЛС
	CreateDynamicObject(970, 1775.151367, -1941.618896, 13.075600, 360.000000, 360.000000, 360.000000, -1, -1, -1, STREAMER_OBJECT_SD, 100.0); // СПАВН ЛС
	CreateDynamicObject(970, 1779.313477, -1941.599243, 13.075600, 360.000000, 360.000000, 360.000000, -1, -1, -1, STREAMER_OBJECT_SD, 100.0); // СПАВН ЛС
	CreateDynamicObject(8168, 1764.177124, -1939.446167, 14.316000, 360.000000, 360.000000, 16.556200, -1, -1, -1, STREAMER_OBJECT_SD, 200.0); // СПАВН ЛС
	CreateActor(33, 2523.2915,-1458.0526,23.9503,178.0443);
    CreateDynamic3DTextLabel("Платный выход из Психушки.\nИспользуйте клавишу: {99CC00}ALT!", 0xFFFFFFFFFFFFFFFF, -802.7033, 2828.3662, 1501.9896, 10.0000);
	CreateDynamic3DTextLabel("Пройти курс {99CC00}быстрой{FFFFFF} реабилитации\nНажмите: ALT!", 0xFFFFFFFFFFFFFFFF, 1148.6715, -1308.8401, 1019.4266, 4.0000);
	CreatePickup(1241, 23, 1148.6715, -1308.8401, 1019.4266, -1);
	CreateDynamic3DTextLabel("Отчисления олигархам\n\n{ffffff}Игроки владеющие минимум 4-я домами\nмогут получать 1 раз в сутки 'Ларец Олигарха'\n{cccccc}[ Нажмите ALT ]", 0xFFFFFFFFFFFF00FF, 1504.5957, 1279.6603, 10.9908, 10.0000);
	CreatePickup(1239, 23, 1504.5957, 1279.6603, 10.9908, -1);
    CreateDynamic3DTextLabel(!"Представитель организации\n""Тёмная Удача""{ffffff}\n\nНажмите ALT, чтобы поговорить", COLOR_GREEN, 2523.2915,-1458.0526,23.9503, 15.0);
	new get;
	ini_getInteger(ini_openFile("cfg_server.ini"),"logi",get);
 	if(get) LOGV3();
	return 1;
}
new LOG_BASE;
public OnFilterScriptExit()
{
    mysql_close(LOG_BASE);
}
stock LOGV3()
{
	LOG_BASE = mysql_connect("localhost", "root", "samp_arizona", "");
    mysql_set_charset("cp1251", LOG_BASE);
    switch(mysql_errno())
    {
        case 0: printf("[Void / LOGI] Подключение логов была Успешна за %d", GetTickCount());
        case 1044: return print("[Void / LOGI] Подключение к базе данных не удалось [Указано несуществующее имя пользователя]");
        case 1045: return print("[Void / LOGI] Подключение к базе данных не удалось [Указан неправильный пароль]");
        case 1049: return print("[Void / LOGI] Подключение к базе данных не удалось [Указана несуществующая база данных]");
        case 2003: return print("[Void / LOGI] Подключение к базе данных не удалось [Хостинг с базой данных недоступен]");
        case 2005: return print("[Void / LOGI] Подключение к базе данных не удалось [Указан неправильный адрес хостинга]");
        default: return printf("[Void / LOGI] Подключение к базе данных не удалось [Неизвестная ошибка. Код ошибки: %i]", mysql_errno());
    }
    return true;
}
void: AddLOG(log_string[])
{
	mysql_tquery(LOG_BASE, log_string);
}

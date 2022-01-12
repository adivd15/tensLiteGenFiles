#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv18_input_int16_test_data.h"

const unsigned int g_conv18_input_int16_test_data_size = 1280;alignas(16) const int16_t g_conv18_input_int16_test_data[] = {10237,-4789,22424,27410,-12089,-21528,4125,-4552,17050,25628,14939,-15626,25742,-24836,24465,-1790,-6656,32149,-17335,-6534,19399,20714,2116,-23674,18511,20013,12023,3651,24948,29349,-23224,25543,30450,-25965,-9100,7626,10911,-11102,172,20417,10998,-18351,-28083,-5030,-14674,384,30089,-21050,3400,21528,-20715,-590,11392,-5142,22476,-22950,12776,13049,-11912,15344,-23404,10809,-28188,-7916,1146,27663,28333,2842,-11193,-5990,-23486,-23227,6390,-215,-16268,-27729,-32565,23477,21751,6722,5253,-1763,23578,18220,667,9573,-24768,29901,8108,8162,28891,-19932,-16618,-29477,19300,-23908,12472,18770,-30440,1800,-2301,-26493,-31558,-31034,-29095,32402,7144,7557,-21970,-13316,28473,-24599,25389,-32400,27611,7033,2468,20154,-4532,-9611,26508,-14294,788,-24796,15753,17789,-13950,-4864,-26912,-15977,3779,-31367,20397,19161,-25620,19847,4468,-9210,-28620,2115,22292,14081,23347,32488,-19449,23439,-16664,9062,-29449,-27286,13549,23800,-31608,-14350,13147,-14913,4303,-14173,24993,2160,6489,-25611,-19514,4825,-18009,-2498,-2724,20177,-22114,18338,-26556,-26934,1651,30055,-17800,-25834,13384,16956,23786,-31817,21604,10197,30730,-24621,4478,8325,8651,14170,1097,-6853,-25227,25887,-26858,-12611,6052,-8151,32686,-23047,7823,-28644,9564,229,-26147,-30667,-22821,12124,8363,-3584,12435,-22718,20806,-22480,-16664,15883,-27380,-16008,-17089,25792,22107,-15750,-21780,7264,-2288,6010,-8058,-2399,-13106,2361,6482,-11443,-29249,-31724,-966,-20326,24246,25547,21965,19631,-11521,12392,31695,31757,-32638,-21093,23867,-16045,-30336,30559,25098,32314,11739,24800,2786,24621,-22156,-2724,10520,31540,11323,28433,596,20304,-12874,9733,8541,-12702,20495,19606,-10997,-21042,2030,-28949,29200,5525,15076,21675,-24249,-13753,-18620,-12847,-20269,-32065,26598,-14498,30002,24986,16910,6260,29613,8558,-9604,-6267,-24377,5431,25702,-866,-26133,12556,3888,-10927,6658,27406,22286,22801,-25229,-305,-25830,26984,-17834,19692,-6343,-7805,24304,-13756,-1529,4822,24184,-31503,30291,24002,32559,2003,-21832,10643,-27608,6915,-29498,-29403,32523,-24069,-26212,18290,-23740,-22574,-32002,17779,31009,32504,-14633,30086,-1821,-22891,24571,28925,31295,484,-30907,3186,-9259,-31024,24908,1806,19758,-27568,-172,20195,10007,-6759,176,-9388,-31885,15370,3111,-7390,13606,16533,-11553,-6948,21651,16139,9753,15281,14213,157,-15702,19808,16655,14474,-17494,30903,24831,4319,4383,138,29487,6408,14556,-21381,29428,-20401,-13220,-18023,369,190,-22198,-29637,258,-31152,19581,-18865,15934,14911,7777,9131,6025,19473,-31926,6324,-11520,-29673,3213,10629,22529,7945,-9771,23750,-15285,-8902,10777,-31498,-20304,-9898,2027,5138,27467,20469,23812,24318,4074,-11496,916,-28417,6504,28755,28518,-20301,-285,30782,9786,32051,209,459,-18883,16709,-1938,-18386,-10493,-9723,20268,16839,915,-17577,-4212,8114,17025,-30954,-11704,22168,-31894,10677,16990,22951,-15492,26714,21137,5889,-8893,-14767,24866,-8264,32124,17867,-2314,-17006,-29550,5037,22077,28648,2323,-27594,10294,-12638,31239,16268,-6510,10908,-19723,-21147,-14672,28607,28853,-30343,-25698,-30602,-11958,-30963,15630,-31343,-20259,2821,-31778,-2985,24312,-1514,13658,28103,-28563,-27226,19164,-19756,7126,3556,-959,19592,9699,-9525,-19332,18764,27893,-4666,27875,28994,27836,-24706,-31328,-11126,14293,-27621,498,15128,-10022,13727,25610,25315,6286,-3623,31928,28803,-1375,2954,-19535,-8543,6915,18064,31507,16894,-7970,12964,28708,-4099,-23350,4988,-31154,-17356,-20096,-18266,-21043,-15780,10012,-16620,-12395,12803,-30038,31576,17372,-8505,14179,-21429,556,-32598,-8305,-7241,14145,18354,-2393,1326,-6735,6357,28073,-16252,-20100,-15854,12145,-8762,24783,-4931,-19777,576,20250,-11326,19815,-27969,-5985,8354,10491,-22765,-31694,25132,-24947,-17580,-11708,-16941,28885,-9520,22391,7637,-26290,13870,9663,-20962,462,-4313,24982,-23428,-3241,16889,26046,12985,31647,-32468,15625,10983,3932,12213,953,-31877,-2662,-374,-16822,-30644,-3283,-28850,10958,-32594,-14456,-12068,9885,13369,30523,-9434,-27155,32300,-4566,3913,22803,28221,-8418,24245,-11753,-10290,12692,-6482,14632,-14513,-10350,-32409,-19863,16442,5451,-18506,5468,15757,14394,-22921,28200,29817,-24214,16294,-3655,31895,32558,9577,13076,-11793,-29410,-15562,16812,-24346,-3649,-10862,29230,26492,20629,11680,-13262,31940,13760,6891,27006,27705,7421,20583,31239,-16667,-9079,-19009,11766,2177,2882,-19920,3308,-31372,15458,31977,-8792,-26103,13579,255,24798,19090,-22099,-22892,-813,-19275,-16423,2109,-4201,32536,-6977,-29158,27295,-1745,-22588,699,-1280,-15455,-9804,-19074,-1029,27793,14181,25724,4027,25263,-13252,8424,27551,6740,16388,17498,28416,582,3881,28855,32195,-17777,-32634,5252,-25393,-5652,22604,-27055,-28077,9680,28300,5351,11477,8158,3825,-20867,-10821,24890,18814,10649,-32457,25147,-30490,-18905,-25093,-26267,-20681,15204,-9668,-17391,-7569,2115,-810,23750,14333,-91,-7869,7243,-7617,20756,-17448,-20777,-31120,10771,26866,6938,-26516,28548,24523,-25112,-5024,32003,-4717,23495,-9619,29598,-21647,12302,-8899,-21072,-5805,-2116,-3820,16396,-23333,-4980,25181,21606,21069,-8704,-10539,-21604,-2517,27719,29885,7046,-3555,25141,22898,-26020,-13532,-22442,-32747,21729,31559,31769,8211,-26368,-4789,6391,26198,17305,32251,1284,-9070,-15192,24290,-16245,-3442,4033,-597,21016,10580,-11027,24204,21109,9807,-13135,2552,11815,15081,-13075,8285,22572,17611,-8129,25274,-31838,-3665,-14643,-16018,12808,-20822,-10488,16839,-18524,7480,22620,-10054,-4010,23985,6619,-3387,-25528,27550,23990,18604,1580,-28704,8949,-29539,19665,26368,12539,-8953,23812,-5457,-2136,-23087,-24655,-20959,-28085,26457,-11295,20491,22343,-24854,-282,9463,6722,12730,-1300,16796,-2009,-19691,-26128,-3010,-8512,11269,2417,-5737,-22882,4366,-31768,-16172,-6617,-12356,-19265,29413,-17072,8603,24491,-2688,-5152,8007,17782,21104,-17384,-22931,-29099,12906,-464,-29705,-12974,-6669,-19594,29438,-29081,13509,-7247,18513,-27095,13334,-7195,-13301,-17077,-1033,17489,30964,7293,5476,-1220,13154,15845,-30776,29433,18744,-29495,24852,23142,-11424,-14746,-16459,-4540,6440,-9311,21243,28453,-18461,-9686,-18422,-27869,-5776,16030,5557,32591,-26627,28022,-15144,-5358,14223,-23065,-12445,-5155,10352,11418,11761,14064,1724,29892,24779,22613,-29901,-15995,-13319,-14214,-28210,8712,1551,-20531,-6436,-14700,25539,22768,-6544,-2439,-6564,-28829,-21736,-29960,16504,25962,32301,28934,16264,-9352,-24870,-22951,19059,-15835,-12810,-15773,25547,4202,-26999,-11851,28117,17570,4113,9463,-13480,-25128,30567,-29147,-13125,-10580,4199,29987,10685,-25941,11875,-8056,-3465,27708,-31586,-22065,-24424,18418,-17212,24695,-32757,28083,-31561,-4618,30338,4374,-23879,-28314,-15291,-3584,11047,-27255,-17907,-31092,15459,18302,7648,-31925,21000,-21576,6902,25237,21404,-5618,-13775,25064,-30240,26745,-25393,31198,2839,-8650,-10821,32269,-2808,-29913,10140,-16117,7437,32362,27511,-21616,563,8321,28922,10621,1212,28155,21297,-16887,7567,-3822,-14978,18678,2346,12338,-22835,-16401,23722,-27452,-7287,-11895,-16895,8546,6825,31322,-779,-16138,8971,-20811,-29528,-18157,-6356,-21772,-10489,-21896,-3223,29913,-27662,-21003,-28388,-27000,-3823,19684,27396,-6143,23133,8184,-6471,18222,28139,15739,31849,1984,-16533,-24908,5080,-18604,25716,-15047,-4316,-20304,138,-20451,22921,-32743,25597,2946,-14031,-24312,22428,15960,25846,-18008,-12888,31747,-15466,-6475,-21089,22241,23274,-14882,7167,-7528,-21446,-9349,-25021,14565,9920,-14123,-16908,16385,-24654,-8383,-27682,-9835,-1287,-3142,-30118,32146,-32222,-538,-21100,-946,-14924,-9992,-17204,-9126,-28502,31220,4980,-24409,10626,21748,-2549,-27726,-21147,12301,-15293,26775,-27770,16359,-21609,-9937,-26249,-13649,-28896,-16193,8838,17484,2041,20414,31550,15757,-17062,29645,-25743,25799,31130,-5845,14426,-16149,-6710,24272,-20888,-4133,-17035,226,17050,10014,-1843,-18790,-22715,8590,9455,-31582,607,-20309,30,19283,20311,6024,25290,-19321,-13153,6126,-3781,-28143,16795,11845,-13458,-18143,22473,17130,-16555,10710,31244,28498,16150,-25149,-27060,18671,-16515,2065,4320,29162
};

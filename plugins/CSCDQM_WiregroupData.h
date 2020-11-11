/*
 * =====================================================================================
 *
 *       Filename:  CSCDQM_WiregroupData.h
 *
 *    Description:  Static Wiregroup data for CSC detector
 *
 *        Version:  1.0
 *        Created:  02/18/2010 03:34:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#ifndef CSCDQM_WiregroupData_H
#define CSCDQM_WiregroupData_H

namespace cscdqm {

  static double dPinToWGCenter_ME1_1[] __attribute__((unused)) = {
      30.7,   75.7,   107.1,  138.6,  170.0,  201.5,  232.9,  264.4,  295.8,  327.2,  358.7,  390.1,
      421.6,  453.0,  484.4,  515.9,  547.3,  578.8,  610.2,  641.7,  673.1,  704.5,  736.0,  767.4,
      798.9,  830.3,  861.8,  893.2,  924.6,  956.1,  987.5,  1019.0, 1050.4, 1081.9, 1113.3, 1144.7,
      1176.2, 1207.6, 1239.1, 1270.5, 1301.9, 1333.4, 1364.8, 1396.3, 1427.7, 1459.2, 1490.6, 1504.9};

  static double dPinToWGCenter_ME1_2[] __attribute__((unused)) = {
      39.6,   60.1,   82.2,   104.4,  126.5,  148.6,  170.7,  192.9,  215.0,  237.1,  259.3,  281.4,  303.5,
      325.6,  347.8,  369.9,  393.6,  418.9,  444.2,  469.5,  494.8,  520.0,  545.3,  564.3,  602.2,  621.2,
      646.5,  671.8,  697.1,  722.4,  747.6,  772.9,  799.8,  828.3,  856.7,  885.2,  913.6,  942.1,  970.5,
      999.0,  1027.4, 1055.9, 1084.3, 1112.8, 1141.2, 1169.6, 1198.1, 1220.2, 1262.9, 1288.2, 1319.8, 1351.4,
      1383.0, 1414.6, 1446.2, 1477.9, 1511.0, 1545.8, 1580.6, 1615.4, 1650.1, 1684.9, 1719.7, 1756.0};

  static double dPinToWGCenter_ME1_3[]
      __attribute__((unused)) = {53.8,   102.8,  153.4,  204.0,  254.6,  305.3,  355.9,  406.5,  457.1,  507.7,  558.3,
                                 602.6,  665.8,  710.1,  760.7,  811.3,  861.9,  912.5,  963.1,  1013.7, 1064.4, 1108.6,
                                 1171.9, 1216.2, 1268.4, 1322.1, 1375.9, 1429.7, 1483.4, 1537.2, 1591.0, 1644.8};

  static double dPinToWGCenter_ME2_1[] __attribute__((unused)) = {
      36.5,   50.5,   66.1,   81.7,   97.3,   112.9,  128.5,  144.1,  159.7,  175.3,  190.9,  206.5,  222.1,  237.7,
      253.3,  268.9,  284.5,  300.1,  315.7,  331.3,  346.9,  362.5,  378.1,  393.7,  409.3,  424.9,  440.5,  456.1,
      471.7,  487.3,  502.9,  518.5,  534.1,  549.6,  565.2,  580.8,  596.4,  612.0,  627.6,  643.2,  658.8,  674.4,
      690.0,  699.4,  727.5,  736.8,  752.4,  768.0,  783.6,  799.2,  814.8,  830.4,  846.0,  861.6,  877.2,  892.8,
      908.4,  924.0,  939.6,  955.2,  970.8,  986.4,  1002.0, 1017.6, 1034.7, 1053.4, 1072.2, 1090.9, 1109.6, 1128.3,
      1147.0, 1165.7, 1184.5, 1203.2, 1221.9, 1240.6, 1259.3, 1278.0, 1296.8, 1309.2, 1340.4, 1352.9, 1371.6, 1390.3,
      1409.1, 1427.8, 1446.5, 1465.2, 1483.9, 1502.6, 1521.4, 1540.1, 1558.8, 1577.5, 1596.2, 1614.9, 1633.7, 1652.4,
      1671.1, 1689.8, 1708.5, 1727.2, 1746.0, 1764.7, 1783.4, 1802.1, 1820.8, 1839.5, 1858.3, 1877.0, 1895.7, 1916.0};

  static double dPinToWGCenter_ME3_1[] __attribute__((unused)) = {
      36.2,   50.2,   65.8,   81.4,   97.0,   112.6,  128.2,  143.8,  159.4,  175.0,  190.6,  206.2,  221.8,  237.4,
      253.0,  268.6,  284.2,  299.8,  315.4,  331.0,  346.6,  362.2,  377.8,  393.4,  409.0,  424.6,  440.2,  455.8,
      471.4,  487.0,  502.6,  511.9,  541.5,  554.0,  572.7,  591.5,  610.2,  628.9,  647.6,  666.3,  685.0,  703.8,
      722.5,  741.2,  759.9,  778.6,  797.3,  816.1,  834.8,  853.5,  872.2,  890.9,  909.6,  928.4,  947.1,  965.8,
      984.5,  1003.2, 1021.9, 1040.7, 1059.4, 1078.1, 1096.8, 1109.3, 1140.5, 1153.0, 1171.7, 1190.4, 1209.1, 1227.8,
      1246.5, 1265.3, 1284.0, 1302.7, 1321.4, 1340.1, 1358.8, 1377.6, 1396.3, 1415.0, 1433.7, 1452.4, 1471.1, 1489.9,
      1508.6, 1527.3, 1546.0, 1564.7, 1583.4, 1602.2, 1620.9, 1639.6, 1658.3, 1677.0, 1695.7, 1716.0};

  static double dPinToWGCenter_ME4_1[] __attribute__((unused)) = {
      38.2,   52.2,   67.8,   83.4,   99.0,   114.6,  130.2,  145.8,  161.4,  177.0,  192.6,  208.2,  223.8,  239.4,
      255.0,  270.6,  286.2,  301.8,  317.4,  333.0,  348.6,  364.2,  379.8,  395.4,  411.0,  426.6,  442.2,  457.8,
      473.4,  489.0,  504.6,  513.9,  542.0,  551.3,  566.9,  582.5,  598.1,  613.7,  629.3,  644.9,  660.5,  676.1,
      691.7,  707.3,  722.9,  738.5,  754.1,  769.7,  785.3,  800.9,  816.5,  832.1,  847.7,  863.3,  878.9,  894.5,
      910.1,  925.7,  941.3,  956.9,  972.5,  988.1,  1003.7, 1013.0, 1041.1, 1050.5, 1066.1, 1081.7, 1097.3, 1112.8,
      1128.4, 1144.0, 1159.6, 1175.2, 1190.8, 1206.4, 1222.0, 1237.6, 1253.2, 1268.8, 1284.4, 1300.0, 1315.6, 1331.2,
      1346.8, 1362.4, 1378.0, 1393.6, 1409.2, 1424.8, 1440.4, 1456.0, 1471.6, 1487.2, 1502.8, 1518.4};

  static double dPinToWGCenter_ME234_2[] __attribute__((unused)) = {
      54.0,   103.0,  153.6,  204.1,  254.7,  305.3,  355.9,  406.4,  457.0,  507.6,  558.2,  608.8,  659.3,
      709.9,  760.5,  804.7,  868.0,  912.2,  962.8,  1013.4, 1064.0, 1114.5, 1165.1, 1215.7, 1266.3, 1316.8,
      1367.4, 1411.7, 1474.9, 1519.1, 1569.7, 1620.3, 1670.9, 1721.5, 1772.0, 1822.6, 1873.2, 1923.8, 1974.3,
      2018.6, 2081.8, 2126.1, 2176.7, 2227.2, 2277.8, 2328.4, 2379.0, 2429.5, 2480.1, 2530.7, 2581.3, 2625.5,
      2688.7, 2733.0, 2783.6, 2834.2, 2884.7, 2935.3, 2985.9, 3036.5, 3087.0, 3137.6, 3188.2, 3237.2};

}  // namespace cscdqm

#endif
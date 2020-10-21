/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010,2011,2012,2013 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of LTE-Sim
 *
 * LTE-Sim is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * LTE-Sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LTE-Sim; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Giuseppe Piro <g.piro@poliba.it>
 */


#ifndef MULTIPATH_V3_M12_H_
#define MULTIPATH_V3_M12_H_

static float multipath_M12_v_3[3000] = {
 9.64901, 9.6429, 9.6327, 9.6184, 9.59996, 9.57736, 9.55055, 9.51948, 9.48409, 9.44431, 9.40006, 9.35125, 9.29777, 9.23952, 9.17637, 9.10816, 9.03476, 8.95597, 8.8716, 8.78145, 8.68525, 8.58275, 8.47364, 8.35759, 8.23421, 8.1031, 7.96377, 7.81568, 7.65822, 7.49069, 7.3123, 7.12211, 6.91907, 6.70191, 6.46916, 6.21908, 5.94954, 5.658, 5.3413, 4.9955, 4.61558, 4.19503, 3.72514, 3.19396, 2.5844, 1.87086, 1.01229, -0.063242, -1.50046, -3.66798, -8.19865, -8.96653, -3.92747, -1.66106, -0.183232, 0.913502, 1.78445, 2.50564, 3.12, 3.65417, 4.1258, 4.54722, 4.92736, 5.2729, 5.58898, 5.87962, 6.14804, 6.39685, 6.62818, 6.84383, 7.0453, 7.23385, 7.41058, 7.57643, 7.7322, 7.87861, 8.01628, 8.14576, 8.26754, 8.38204, 8.48966, 8.59074, 8.68558, 8.77447, 8.85765, 8.93535, 9.00777, 9.07511, 9.13751, 9.19515, 9.24815, 9.29664, 9.34073, 9.38053, 9.41611, 9.44757, 9.47498, 9.4984, 9.51789, 9.5335, 9.54527, 9.55324, 9.55743, 9.55788, 9.55459, 9.54759, 9.53687, 9.52244, 9.50429, 9.48242, 9.45679, 9.42739, 9.3942, 9.35717, 9.31626, 9.27143, 9.22262, 9.16976, 9.11279, 9.05162, 8.98617, 8.91633, 8.84201, 8.76307, 8.67938, 8.59081, 8.49718, 8.39832, 8.29403, 8.1841, 8.06828, 7.94631, 7.81789, 7.6827, 7.54037, 7.39049, 7.23259, 7.06617, 6.89063, 6.70531, 6.50945, 6.30217, 6.08247, 5.84917, 5.60089, 5.336, 5.05256, 4.74821, 4.42007, 4.06456, 3.67719, 3.25214, 2.78178, 2.25574, 1.65949, 0.971734, 0.159406, -0.832954, -2.10956, -3.90528, -6.97626, -24.7444, -6.88592, -3.94014, -2.22175, -1.01056, -0.0788877, 0.675058, 1.3057, 1.84557, 2.31566, 2.73031, 3.09977, 3.43157, 3.73146, 4.00388, 4.25237, 4.47976, 4.68837, 4.88011, 5.05659, 5.21914, 5.36891, 5.50689, 5.63391, 5.75071, 5.85791, 5.95608, 6.0457, 6.12719, 6.20093, 6.26725, 6.32643, 6.37873, 6.42438, 6.46356, 6.49644, 6.52318, 6.54389, 6.55869, 6.56764, 6.57083, 6.56831, 6.5601, 6.54622, 6.52668, 6.50147, 6.47055, 6.43388, 6.3914, 6.34303, 6.28866, 6.22819, 6.16147, 6.08835, 6.00863, 5.92211, 5.82855, 5.72767, 5.61916, 5.50266, 5.37778, 5.24406, 5.10097, 4.94791, 4.78422, 4.60909, 4.42162, 4.22074, 4.00521, 3.77356, 3.52405, 3.25455, 2.96252, 2.6448, 2.29742, 1.91534, 1.49202, 1.01868, 0.483298, -0.131376, -0.851226, -1.71779, -2.8041, -4.25767, -6.45727, -11.1222, -11.4742, -6.59418, -4.36335, -2.90478, -1.82222, -0.963359, -0.253332, 0.350258, 0.87376, 1.33467, 1.74521, 2.11424, 2.4484, 2.75278, 3.03138, 3.28739, 3.5234, 3.74154, 3.94357, 4.13099, 4.30505, 4.46683, 4.61724, 4.7571, 4.88709, 5.00782, 5.11983, 5.22359, 5.31951, 5.40795, 5.48925, 5.56369, 5.63152, 5.69298, 5.74827, 5.79756, 5.84101, 5.87877, 5.91094, 5.93763, 5.95893, 5.97492, 5.98565, 5.99117, 5.99151, 5.9867, 5.97674, 5.96163, 5.94135, 5.91588, 5.88518, 5.84919, 5.80786, 5.76108, 5.70878, 5.65084, 5.58713, 5.5175, 5.44179, 5.35981, 5.27134, 5.17614, 5.07395, 4.96444, 4.84728, 4.72209, 4.58841, 4.44575, 4.29353, 4.13112, 3.95777, 3.77262, 3.57467, 3.36276, 3.13553, 2.89137, 2.62834, 2.3441, 2.03579, 1.69986, 1.33181, 0.925868, 0.47441, -0.0328847, -0.610497, -1.27965, -2.07326, -3.04652, -4.30305, -6.07587, -9.11194, -29.9011, -9.06057, -6.08111, -4.34091, -3.11102, -2.162, -1.39146, -0.744709, -0.189098, 0.296453, 0.726333, 1.11081, 1.45745, 1.77202, 2.05898, 2.32187, 2.56354, 2.78631, 2.9921, 3.18253, 3.35894, 3.52249, 3.67416, 3.81481, 3.94517, 4.06589, 4.17751, 4.28054, 4.37541, 4.46249, 4.54213, 4.61462, 4.68022, 4.73916, 4.79165, 4.83786, 4.87795, 4.91206, 4.94029, 4.96274, 4.9795, 4.99062, 4.99616, 4.99615, 4.99059, 4.97951, 4.96288, 4.94069, 4.91288, 4.87942, 4.84022, 4.79519, 4.74424, 4.68724, 4.62404, 4.55447, 4.47836, 4.39548, 4.30558, 4.2084, 4.1036, 3.99084, 3.86972, 3.73976, 3.60045, 3.4512, 3.29131, 3.11999, 2.93635, 2.7393, 2.52763, 2.29984, 2.0542, 1.78861, 1.50051, 1.18675, 0.843391, 0.465405, 0.0462629, -0.422748, -0.953613, -1.56346, -2.27801, -3.13846, -4.21712, -5.65968, -7.83821, -12.4147, -13.0392, -8.0571, -5.80425, -4.33456, -3.2445, -2.3798, -1.66483, -1.05686, -0.529357, -0.0647102, 0.349357, 0.721751, 1.05914, 1.36663, 1.64823, 1.90715, 2.14599, 2.36688, 2.57158, 2.76159, 2.93817, 3.10239, 3.25518, 3.39734, 3.52956, 3.65246, 3.76655, 3.87232, 3.97017, 4.06047, 4.14354, 4.21967, 4.28912, 4.3521, 4.40882, 4.45945, 4.50414, 4.54303, 4.57623, 4.60385, 4.62596, 4.64263, 4.65392, 4.65986, 4.66049, 4.65582, 4.64584, 4.63054, 4.60991, 4.5839, 4.55245, 4.51551, 4.47298, 4.42478, 4.37079, 4.31087, 4.24488, 4.17264, 4.09396, 4.00861, 3.91634, 3.81687, 3.70989, 3.59502, 3.47186, 3.33994, 3.19875, 3.04767, 2.88603, 2.71304, 2.52777, 2.32917, 2.11599, 1.88677, 1.63977, 1.37288, 1.08356, 0.76865, 0.424233, 0.0452987, -0.374662, -0.844326, -1.37563, -1.9856, -2.69981, -3.55916, -4.63535, -6.07244, -8.23669, -12.7415, -13.6134, -8.54095, -6.27231, -4.79671, -3.70396, -2.83801, -2.12259, -1.51463, -0.987439, -0.52332, -0.109936, 0.261656, 0.598145, 0.904662, 1.18523, 1.44306, 1.68074, 1.90043, 2.10389, 2.29262, 2.46787, 2.63072, 2.78209, 2.92279, 3.05351, 3.17486, 3.28735, 3.39147, 3.48763, 3.57617, 3.65744, 3.7317, 3.79922, 3.8602, 3.91485, 3.96334, 4.00581, 4.0424, 4.07321, 4.09834, 4.11787, 4.13186, 4.14035, 4.14337, 4.14095, 4.13309, 4.11978, 4.10099, 4.0767, 4.04684, 4.01136, 3.97016, 3.92315, 3.87022, 3.81122, 3.74601, 3.67439, 3.59618, 3.51113, 3.419, 3.31947, 3.21222, 3.09687, 2.973, 2.8401, 2.69764, 2.54497, 2.38137, 2.20601, 2.0179, 1.81591, 1.59872, 1.36475, 1.1121, 0.838507, 0.541182, 0.21667, -0.13938, -0.532556, -0.970201, -1.46223, -2.02247, -2.6711, -3.43912, -4.37795, -5.58246, -7.25998, -10.0339, -19.7815, -11.0748, -7.78731, -5.94346, -4.65878, -3.67419, -2.87761, -2.21023, -1.63736, -1.13679, -0.693453, -0.29666, 0.0614549, 0.386843, 0.684114, 0.956911, 1.20816, 1.44025, 1.65516, 1.85452, 2.03973, 2.21196, 2.37222, 2.52138, 2.66019, 2.78931, 2.90931, 3.0207, 3.12392, 3.21936, 3.30736, 3.38823, 3.46225, 3.52965, 3.59065, 3.64542, 3.69414, 3.73695, 3.77397, 3.80531, 3.83106, 3.85129, 3.86606, 3.87542, 3.8794, 3.87801, 3.87127, 3.85915, 3.84165, 3.81872, 3.79031, 3.75636, 3.71679, 3.67151, 3.62041, 3.56334, 3.50017, 3.43073, 3.35481, 3.2722, 3.18264, 3.08586, 2.98154, 2.86932, 2.74878, 2.61947, 2.48086, 2.33236, 2.17326, 2.0028, 1.82005, 1.62395, 1.41327, 1.18652, 0.941979, 0.677536, 0.39064, 0.0781504, -0.263867, -0.64042, -1.05802, -1.52535, -2.05434, -2.66206, -3.37407, -4.23132, -5.30559, -6.74114, -8.905, -13.4167, -14.2542, -9.19143, -6.92262, -5.44555, -4.35091, -3.48288, -2.76527, -2.15506, -1.62558, -1.15913, -0.743396, -0.369432, -0.0305536, 0.278369, 0.561356, 0.821619, 1.06176, 1.28391, 1.48985, 1.68107, 1.85883, 2.02421, 2.17814, 2.3214, 2.45471, 2.57866, 2.69379, 2.80056, 2.89939, 2.99065, 3.07464, 3.15167, 3.22198, 3.28579, 3.34331, 3.3947, 3.44012, 3.4797, 3.51355, 3.54177, 3.56443, 3.58162, 3.59336, 3.59971, 3.60069, 3.59629, 3.58653, 3.57138, 3.55082, 3.5248, 3.49325, 3.45611, 3.4133, 3.36469, 3.31018, 3.24961, 3.18283, 3.10965, 3.02985, 2.94321, 2.84945, 2.74826, 2.6393, 2.52219, 2.39648, 2.26166, 2.11718, 1.96238, 1.7965, 1.61869, 1.42795, 1.22309, 1.00275, 0.765282, 0.508741, 0.230751, -0.0715901, -0.401896, -0.764733, -1.16599, -1.61345, -2.11768, -2.69353, -3.36286, -4.15976, -5.14175, -6.41791, -8.23796, -11.4355, -21.9964, -10.7381, -7.89911, -6.20236, -4.99091, -4.05021, -3.2829, -2.63646, -2.07933, -1.59105, -1.15759, -0.768919, -0.417611, -0.0980245, 0.194233, 0.462643, 0.710013, 0.938639, 1.15042, 1.34694, 1.52955, 1.69938, 1.85741, 2.00449, 2.14134, 2.26861, 2.38684, 2.49654, 2.59813, 2.69199, 2.77846, 2.85783, 2.93038, 2.99632, 3.05587, 3.10921, 3.15649, 3.19785, 3.23341, 3.26328, 3.28752, 3.30622, 3.31943, 3.32718, 3.3295, 3.3264, 3.31788, 3.30392, 3.2845, 3.25957, 3.22907, 3.19292, 3.15105, 3.10333, 3.04966, 2.98987, 2.92382, 2.8513, 2.77211, 2.686, 2.5927, 2.49189, 2.38323, 2.26633, 2.14072, 2.0059, 1.86128, 1.7062, 1.53989, 1.36145, 1.16987, 0.963928, 0.742209, 0.503025, 0.244348, -0.0362795, -0.34188, -0.676224, -1.04409, -1.45168, -1.90721, -2.42191, -3.01171, -3.70025, -4.52488, -5.54983, -6.90037, -8.87801, -12.6216, -16.9589, -10.2273, -7.70821, -6.12864, -4.97748, -4.07317, -3.32995, -2.70046, -2.15574, -1.67681, -1.25053, -0.867459, -0.520546, -0.204419, 0.0851203, 0.351415, 0.597165, 0.824586, 1.03551, 1.23149, 1.41381, 1.58358, 1.74177, 1.88919, 2.02655, 2.15448, 2.27353, 2.38417, 2.48684, 2.5819, 2.66969, 2.75049, 2.82458, 2.89219, 2.95351, 3.00872, 3.05799, 3.10146, 3.13924, 3.17144, 3.19814, 3.21942, 3.23534, 3.24594, 3.25126, 3.2513, 3.24608, 3.23559, 3.21981, 3.19871, 3.17224, 3.14034, 3.10295, 3.05996, 3.01128, 2.95678, 2.89633, 2.82976, 2.75689, 2.67752, 2.59141, 2.4983, 2.3979, 2.28986, 2.17381, 2.04933, 1.91592, 1.77304, 1.62006, 1.45626, 1.2808, 1.09273, 0.890916, 0.674054, 0.440584, 0.188647, -0.0839983, -0.380089, -0.703016, -1.05704, -1.44763, -1.88196, -2.36966, -2.92417, -3.56495, -4.32181, -5.24379, -6.42036, -8.04344, -10.668, -18.357, -12.4845, -8.95274, -7.03735, -5.71879, -4.71463, -3.90544, -3.22936, -2.65022, -2.14498, -1.69811, -1.29859, -0.938376, -0.611367, -0.312859, -0.0391395, 0.212772, 0.445302, 0.660452, 0.859888, 1.04502, 1.21703, 1.37694, 1.52563, 1.66386, 1.79229, 1.91149, 2.02198, 2.12418, 2.21851, 2.30529, 2.38484, 2.45742, 2.52327, 2.58261, 2.6356, 2.68241, 2.72319, 2.75804, 2.78706, 2.81035, 2.82795, 2.83993, 2.84632, 2.84714, 2.84239, 2.83206, 2.81614, 2.79457, 2.76732, 2.7343, 2.69542, 2.6506, 2.59969, 2.54256, 2.47905, 2.40896, 2.33207, 2.24814, 2.15689, 2.05801, 1.95113, 1.83585, 1.71171, 1.57818, 1.43466, 1.28047, 1.1148, 0.936745, 0.745231, 0.539005, 0.316588, 0.0762158, -0.184234, -0.467345, -0.776305, -1.11511, -1.48884, -1.90414, -2.36985, -2.89821, -3.50669, -4.22165, -5.08547, -6.17302, -7.6366, -9.87247, -14.7576, -14.4105, -9.75067, -7.55614, -6.10762, -5.02636, -4.16483, -3.44999, -2.84031, -2.30988, -1.84147, -1.42303, -1.04579, -0.703197, -0.390193, -0.102822, 0.162085, 0.407096, 0.634327, 0.845534, 1.0422, 1.22557, 1.39672, 1.55656, 1.70591, 1.84545, 1.97579, 2.09747, 2.21095, 2.31665, 2.41494, 2.50616, 2.59058, 2.66847, 2.74007, 2.80557, 2.86516, 2.91901, 2.96725, 3.01002, 3.04742, 3.07956, 3.1065, 3.12833, 3.14509, 3.15684, 3.1636, 3.1654, 3.16224, 3.15414, 3.14108, 3.12303, 3.09998, 3.07186, 3.03863, 3.00022, 2.95655, 2.90752, 2.85303, 2.79294, 2.72713, 2.65543, 2.57766, 2.49362, 2.40308, 2.30578, 2.20144, 2.08974, 1.97032, 1.84277, 1.70663, 1.56137, 1.40642, 1.24108, 1.06459, 0.876049, 0.674422, 0.458498, 0.226849, -0.0222166, -0.290728, -0.581146, -0.896493, -1.24054, -1.61805, -2.03522, -2.50024, -3.02432, -3.6233, -4.32074, -5.15377, -6.18619, -7.54219, -9.51971, -13.2345, -17.8416, -10.9696, -8.4438, -6.86837, -5.72468, -4.82934, -4.09596, -3.47687, -2.94299, -2.47525, -2.06048, -1.6892, -1.35436, -1.05059, -0.773685, -0.520307, -0.287765, -0.0738546, 0.123247, 0.305065, 0.472886, 0.627801, 0.770744, 0.902517, 1.02381, 1.13523, 1.2373, 1.33046, 1.41511, 1.4916, 1.56022, 1.62123, 1.67485, 1.72127, 1.76064, 1.79311, 1.81876, 1.83769, 1.84994, 1.85555, 1.85454, 1.84688, 1.83254, 1.81148, 1.7836, 1.7488, 1.70695, 1.65788, 1.60142, 1.53733, 1.46535, 1.38518, 1.29647, 1.19883, 1.09178, 0.974808, 0.847293, 0.708532, 0.557705, 0.393857, 0.215871, 0.0224293, -0.188034, -0.417395, -0.667924, -0.942404, -1.24429, -1.57794, -1.94897, -2.36474, -2.83524, -3.37438, -4.00251, -4.75095, -5.67176, -6.86127, -8.53106, -11.3243, -21.8771, -12.1214, -8.86905, -7.02021, -5.72127, -4.71876, -3.90241, -3.21416, -2.61969, -2.09696, -1.63104, -1.21128, -0.829869, -0.480869, -0.159684, 0.137328, 0.413094, 0.670007, 0.910048, 1.13487, 1.34587, 1.54425, 1.73103, 1.90709, 2.0732, 2.23004, 2.37821, 2.51823, 2.65056, 2.77563, 2.89381, 3.00542, 3.11077, 3.21013, 3.30375, 3.39185, 3.47463, 3.55227, 3.62494, 3.69279, 3.75596, 3.81458, 3.86876, 3.9186, 3.96419, 4.00564, 4.043, 4.07636, 4.10577, 4.1313, 4.15298, 4.17087, 4.18501, 4.19543, 4.20215, 4.2052, 4.20459, 4.20035, 4.19247, 4.18097, 4.16584, 4.14708, 4.12467, 4.09861, 4.06887, 4.03543, 3.99826, 3.95733, 3.9126, 3.86403, 3.81156, 3.75515, 3.69472, 3.63022, 3.56156, 3.48866, 3.41144, 3.32979, 3.24361, 3.15278, 3.05717, 2.95664, 2.85103, 2.74019, 2.62392, 2.50202, 2.37428, 2.24045, 2.10027, 1.95344, 1.79965, 1.63853, 1.46968, 1.29266, 1.10697, 0.91206, 0.707289, 0.491944, 0.265208, 0.0261465, -0.226323, -0.493459, -0.776736, -1.0779, -1.39904, -1.74268, -2.11191, -2.51059, -2.9436, -3.41723, -3.93987, -4.52292, -5.18258, -5.94291, -6.84199, -7.94546, -9.38202, -11.4644, -15.4054, -19.0766, -12.8324, -10.4427, -8.96286, -7.90384, -7.08954, -6.43626, -5.89765, -5.44538, -5.06089, -4.73138, -4.4477, -4.20311, -3.99251, -3.812, -3.65857, -3.52984, -3.42398, -3.33957, -3.27551, -3.23103, -3.20558, -3.19887, -3.21081, -3.24154, -3.29142, -3.36104, -3.45127, -3.56326, -3.69853, -3.85906, -4.04734, -4.26659, -4.52099, -4.81597, -5.15881, -5.55942, -6.03178, -6.59641, -7.28511, -8.15101, -9.2931, -10.931, -13.7461, -26.5065, -14.0717, -10.866, -8.99649, -7.66193, -6.61868, -5.75959, -5.02792, -4.38994, -3.82396, -3.31521, -2.85314, -2.42998, -2.03982, -1.67809, -1.34113, -1.02601, -0.730326, -0.452082, -0.189607, 0.0585141, 0.293492, 0.516368, 0.728044, 0.929311, 1.12086, 1.3033, 1.47718, 1.64297, 1.80111, 1.95198, 2.09593, 2.23328, 2.36431, 2.48928, 2.60841, 2.72193, 2.83003, 2.93288, 3.03065, 3.12348, 3.21151, 3.29485, 3.37363, 3.44795, 3.5179, 3.58355, 3.645, 3.7023, 3.75553, 3.80473, 3.84995, 3.89124, 3.92863, 3.96215, 3.99184, 4.0177, 4.03976, 4.05802, 4.07248, 4.08316, 4.09003, 4.09309, 4.09232, 4.08769, 4.07918, 4.06676, 4.05038, 4.03, 4.00555, 3.97699, 3.94423, 3.90721, 3.86583, 3.82, 3.76962, 3.71456, 3.65469, 3.58988, 3.51996, 3.44477, 3.3641, 3.27774, 3.18547, 3.08701, 2.98208, 2.87035, 2.75147, 2.62504, 2.49059, 2.34762, 2.19556, 2.03375, 1.86144, 1.67777, 1.48175, 1.27222, 1.04782, 0.806968, 0.547734, 0.267814, -0.0356155, -0.366052, -0.727903, -1.12684, -1.57029, -2.06834, -2.63506, -3.29097, -4.06778, -5.01822, -6.2402, -7.94985, -10.8115, -22.4948, -11.453, -8.28125, -6.47345, -5.20614, -4.23151, -3.4411, -2.77765, -2.20721, -1.708, -1.26519, -0.86825, -0.509417, -0.182814, 0.116119, 0.390988, 0.644695, 0.879607, 1.09768, 1.30055, 1.4896, 1.66599, 1.83074, 1.98471, 2.12865, 2.26322, 2.389, 2.50649, 2.61614, 2.71834, 2.81346, 2.90179, 2.98362, 3.0592, 3.12874, 3.19246, 3.25051, 3.30306, 3.35025, 3.3922, 3.429, 3.46077, 3.48756, 3.50946, 3.52651, 3.53876, 3.54624, 3.54897, 3.54696, 3.54021, 3.52872, 3.51245, 3.49139, 3.46548, 3.43468, 3.39892, 3.35811, 3.31217, 3.261, 3.20446, 3.14243, 3.07474, 3.00123, 2.92169, 2.83591, 2.74363, 2.64457, 2.53842, 2.42484, 2.30341, 2.17369, 2.03518, 1.88729, 1.72936, 1.56063, 1.38023, 1.18715, 0.980206, 0.757998, 0.518879, 0.260868, -0.0184304, -0.321958, -0.653376, -1.01732, -1.41976, -1.86863, -2.37468, -2.95311, -3.62632, -4.42938, -5.42184, -6.71761, -8.58149, -11.93, -19.7811, -10.695, -7.96175, -6.2989, -5.10163, -4.16674, -3.40075, -2.75287, -2.19239, -1.69932, -1.25992, -0.86432, -0.505224, -0.177059, 0.124521, 0.402965, 0.661064, 0.901103, 1.12498, 1.33428, 1.53036, 1.71436, 1.88728, 2.04998, 2.20321, 2.34762, 2.4838, 2.61227, 2.73347, 2.84784, 2.95572, 3.05746, 3.15336, 3.24369, 3.32869, 3.4086, 3.48362, 3.55394, 3.61973, 3.68116, 3.73837, 3.79151, 3.84069, 3.88603, 3.92765, 3.96564, 4.0001, 4.03112, 4.05878, 4.08316, 4.10434, 4.12237, 4.13732, 4.14926, 4.15824, 4.16432, 4.16754, 4.16796, 4.16563, 4.16058, 4.15285, 4.1425, 4.12956, 4.11406, 4.09605, 4.07556, 4.05262, 4.02726, 3.99953, 3.96946, 3.93707, 3.9024, 3.86548, 3.82635, 3.78504, 3.74158, 3.69601, 3.64837, 3.59869, 3.54701, 3.49337, 3.43781, 3.38037, 3.32111, 3.26006, 3.19728, 3.13282, 3.06674, 2.9991, 2.92996, 2.85938, 2.78744, 2.71421, 2.63977, 2.56421, 2.48762, 2.41008, 2.33171, 2.2526, 2.17288, 2.09265, 2.01205, 1.9312, 1.85024, 1.76932, 1.68858, 1.60819, 1.52831, 1.44911, 1.37076, 1.29345, 1.21735, 1.14267, 1.06958, 0.998283, 0.928978, 0.861858, 0.797117, 0.734947, 0.675535, 0.619064, 0.565708, 0.515634, 0.468997, 0.425942, 0.386597, 0.35108, 0.319488, 0.291904, 0.26839, 0.248989, 0.233725, 0.222603, 0.215603, 0.212689, 0.213804, 0.21887, 0.227793, 0.240459, 0.256738, 0.276488, 0.299549, 0.325752, 0.354918, 0.386855, 0.421368, 0.458255, 0.49731, 0.538322, 0.581081, 0.625376, 0.670997, 0.717735, 0.765384, 0.813743, 0.862613, 0.911799, 0.961114, 1.01037, 1.0594, 1.10802, 1.15606, 1.20338, 1.2498, 1.29518, 1.33937, 1.38223, 1.42364, 1.46344, 1.50152, 1.53776, 1.57202, 1.60419, 1.63416, 1.66181, 1.68703, 1.7097, 1.72971, 1.74696, 1.76132, 1.77268, 1.78093, 1.78595, 1.78761, 1.7858, 1.78037, 1.7712, 1.75813, 1.74103, 1.71973, 1.69405, 1.66383, 1.62887, 1.58895, 1.54386, 1.49336, 1.43716, 1.37499, 1.30653, 1.23142, 1.14928, 1.05967, 0.96211, 0.856059, 0.740905, 0.615956, 0.48042, 0.333391, 0.173819, 0.000483355, -0.188048, -0.393474, -0.617827, -0.863567, -1.13371, -1.43202, -1.76327, -2.1336, -2.55119, -3.02718, -3.57736, -4.22513, -5.00737, -5.98734, -7.28797, -9.20296, -12.8213, -17.6978, -10.5823, -7.98315, -6.34696, -5.14584, -4.19419, -3.4048, -2.72964, -2.13943, -1.61497, -1.14302, -0.714031, -0.320914, 0.0417506, 0.378198, 0.691799, 0.985279, 1.26087, 1.52044, 1.76554, 1.99749, 2.21742, 2.42631, 2.62499, 2.81419, 2.99458, 3.1667, 3.33108, 3.48815, 3.63831, 3.78192, 3.91932, 4.05077, 4.17656, 4.29691, 4.41204, 4.52215, 4.62742, 4.728, 4.82405, 4.91571, 5.00309, 5.08631, 5.16547, 5.24067, 5.31199, 5.37951, 5.44331, 5.50344, 5.55996, 5.61293, 5.66239, 5.70839, 5.75095, 5.79011, 5.82589, 5.85832, 5.88742, 5.91319, 5.93564, 5.95478, 5.97061, 5.98313, 5.99231, 5.99816, 6.00064, 5.99975, 5.99544, 5.9877, 5.97648, 5.96174, 5.94343, 5.9215, 5.89589, 5.86652, 5.83333, 5.79624, 5.75515, 5.70996, 5.66057, 5.60686, 5.54869, 5.48592, 5.4184, 5.34595, 5.26838, 5.18547, 5.09701, 5.00274, 4.90236, 4.79557, 4.68202, 4.56131, 4.43301, 4.29663, 4.15162, 3.99733, 3.83307, 3.658, 3.47118, 3.27151, 3.0577, 2.82824, 2.58134, 2.31482, 2.02604, 1.71177, 1.36791, 0.989286, 0.569108, 0.0983063, -0.435648, -1.05076, -1.77426, -2.65021, -3.75707, -5.25663, -7.58093, -12.967, -11.311, -7.01844, -4.89984, -3.4813, -2.414, -1.55878, -0.845868, -0.23526, 0.298121, 0.771037, 1.19525, 1.57932, 1.9297, 2.25133, 2.54812, 2.82319, 3.07907, 3.31786, 3.54129, 3.75083, 3.94773, 4.13306, 4.30773, 4.47255, 4.62821, 4.77533, 4.91444, 5.04603, 5.17052, 5.2883, 5.3997, 5.50504, 5.60458, 5.69858, 5.78726, 5.87082, 5.94945, 6.02333, 6.09259, 6.15738, 6.21782, 6.27403, 6.32611, 6.37416, 6.41826, 6.45849, 6.49491, 6.52758, 6.55657, 6.58191, 6.60365, 6.62182, 6.63646, 6.64759, 6.65522, 6.65937, 6.66005, 6.65726, 6.651, 6.64126, 6.62804, 6.6113, 6.59103, 6.5672, 6.53977, 6.50871, 6.47397, 6.4355, 6.39323, 6.3471, 6.29704, 6.24295, 6.18476, 6.12235, 6.05561, 5.98443, 5.90866, 5.82816, 5.74276, 5.65227, 5.55651, 5.45524, 5.34822, 5.23518, 5.11581, 4.9898, 4.85675, 4.71625, 4.56783, 4.41097, 4.24505, 4.0694, 3.88323, 3.68565, 3.47561, 3.25189, 3.01308, 2.75747, 2.48304, 2.18733, 1.86732, 1.51926, 1.13838, 0.718509, 0.251485, -0.273851, -0.873295, -1.57028, -2.40174, -3.43106, -4.78142, -6.74745, -10.4239, -15.278, -8.25315, -5.70641, -4.11967, -2.96703, -2.06338, -1.32166, -0.693938, -0.150963, 0.326427, 0.751468, 1.13369, 1.48017, 1.79634, 2.08641, 2.35375, 2.60109, 2.83066, 3.0443, 3.24358, 3.42982, 3.60413, 3.76748, 3.92072, 4.06458, 4.1997, 4.32663, 4.44589, 4.55791, 4.6631, 4.7618, 4.85434, 4.94099, 5.02203, 5.09767, 5.16814, 5.23362, 5.29429, 5.3503, 5.4018, 5.44892, 5.49177, 5.53047, 5.56511, 5.59577, 5.62255, 5.6455, 5.6647, 5.6802, 5.69204, 5.70028, 5.70495, 5.70609, 5.70371, 5.69784, 5.6885, 5.6757, 5.65944, 5.63971, 5.61653, 5.58987, 5.55972, 5.52607, 5.48888, 5.44812, 5.40375, 5.35574, 5.30403, 5.24857, 5.18929, 5.12612, 5.05899, 4.98779, 4.91245, 4.83284, 4.74886, 4.66037, 4.56723, 4.46928, 4.36634, 4.25823, 4.14474, 4.02563, 3.90063, 3.76948, 3.63184, 3.48736, 3.33564, 3.17624, 3.00865, 2.83231, 2.64657, 2.45069, 2.24384, 2.02503, 1.79313, 1.5468, 1.28449, 1.00432, 0.704027, 0.380859, 0.0314054, -0.348623, -0.764726, -1.22411, -1.7365, -2.31541, -2.98047, -3.76179, -4.70895, -5.91268, -7.56846, -10.2467, -18.3432, -11.9115, -8.45934, -6.57848, -5.28442, -4.30058, -3.50934, -2.84961, -2.28555, -1.79433, -1.36051, -0.973153, -0.624235, -0.307687, -0.0188133, 0.246097, 0.490027, 0.715408, 0.924253, 1.11824, 1.29879, 1.46711, 1.62425, 1.77109, 1.90842, 2.03692, 2.15721, 2.26981, 2.37519, 2.47379, 2.56599, 2.65211, 2.73248, 2.80737, 2.87704, 2.94172, 3.00161, 3.05692, 3.10781, 3.15445, 3.19698, 3.23555, 3.27028, 3.30129, 3.32868, 3.35256, 3.37301, 3.39012, 3.40397, 3.41464, 3.42218, 3.42667, 3.42816, 3.4267, 3.42234, 3.41513, 3.4051, 3.3923, 3.37676, 3.35852, 3.33759, 3.314, 3.28778, 3.25894, 3.22751, 3.19348, 3.15689, 3.11772, 3.07599, 3.0317, 2.98486, 2.93545, 2.88347, 2.82891, 2.77176, 2.71201, 2.64964, 2.58462, 2.51693, 2.44654, 2.37342, 2.29754, 2.21884, 2.13729, 2.05284, 1.96542, 1.87497, 1.78143, 1.68473, 1.58476, 1.48146, 1.3747, 1.26439, 1.15041, 1.03262, 0.910865, 0.784998, 0.654835, 0.520181, 0.38082, 0.236509, 0.0869845, -0.0680521, -0.228932, -0.396024, -0.569746, -0.750566, -0.939014, -1.13569, -1.34128, -1.55658, -1.78249, -2.02007, -2.27056, -2.5354, -2.81633, -3.11544, -3.43525, -3.77887, -4.1502, -4.5542, -4.9973, -5.4881, -6.03838, -6.66495, -7.39299, -8.26272, -9.34433, -10.7781, -12.917, -17.2663, -18.7403, -13.4384, -11.1317, -9.6406, -8.53844, -7.66479, -6.9417, -6.32534, -5.78861, -5.31356, -4.88771, -4.502, -4.14966, -3.82552, -3.52551, -3.24637, -2.98547, -2.74064, -2.5101, -2.29231, -2.08601, -1.89009, -1.7036, -1.52572, -1.35575, -1.19304, -1.03706, -0.887304, -0.743345, -0.604793, -0.471303, -0.342563, -0.218295, -0.0982458, 0.0178105, 0.13008, 0.238748, 0.343985, 0.445943, 0.544761, 0.640566, 0.733472, 0.823586, 0.911, 0.995802, 1.07807, 1.15788, 1.23528, 1.31035, 1.38313, 1.45366, 1.522, 1.58818, 1.65223, 1.71417, 1.77405, 1.83187, 1.88766, 1.94142, 1.99319, 2.04295, 2.09072, 2.13651, 2.18031, 2.22213, 2.26195, 2.29979, 2.33562, 2.36943, 2.40122, 2.43098, 2.45867, 2.4843, 2.50783, 2.52924, 2.54851, 2.56561, 2.58051, 2.59318, 2.60358, 2.61168, 2.61744, 2.62082, 2.62177, 2.62024, 2.61619, 2.60955, 2.60027, 2.58829, 2.57354, 2.55596, 2.53545, 2.51196, 2.48539, 2.45564, 2.42262, 2.38623, 2.34635, 2.30286, 2.25563, 2.20452, 2.14938, 2.09003, 2.02631, 1.95802, 1.88495, 1.80686, 1.7235, 1.6346, 1.53986, 1.43892, 1.33142, 1.21695, 1.09504, 0.96516, 0.826734, 0.679094, 0.521484, 0.353036, 0.172753, -0.0205254, -0.228156, -0.451741, -0.693188, -0.9548, -1.23938, -1.55042, -1.89228, -2.27058, -2.69269, -3.16857, -3.7121, -4.34352, -5.09395, -6.01506, -7.20219, -8.86411, -11.6307, -21.6118, -12.5612, -9.2702, -7.40873, -6.10275, -5.09508, -4.27423, -3.58168, -2.98286, -2.45562, -1.98495, -1.56018, -1.17346, -0.818858, -0.491762, -0.188537, 0.0937428, 0.357464, 0.6046, 0.836798, 1.05545, 1.26174, 1.45667, 1.64114, 1.81589, 1.98159, 2.13884, 2.28814, 2.42994, 2.56466, 2.69266, 2.81426, 2.92975, 3.03938, 3.1434, 3.24201, 3.33541, 3.42376, 3.50721, 3.58592, 3.65999, 3.72955, 3.79468, 3.8555, 3.91206, 3.96444, 4.0127, 4.0569, 4.09708, 4.13327, 4.1655, 4.19381, 4.21819, 4.23866, 4.25522, 4.26787, 4.27659, 4.28137, 4.28217, 4.27897, 4.27173, 4.26039, 4.24489, 4.22518, 4.20118, 4.17281, 4.13996, 4.10254, 4.06043, 4.01349, 3.96159, 3.90456, 3.84222, 3.77437, 3.7008, 3.62127, 3.53549, 3.44318, 3.34399, 3.23755, 3.12344, 3.00118, 2.87024, 2.73001, 2.57979, 2.41879, 2.2461, 2.06065, 1.8612, 1.6463, 1.41421, 1.16284, 0.88968, 0.591614, 0.264762, -0.0958095, -0.496504, -0.945842, -1.45551, -2.04217, -2.73069, -3.56072, -4.60126, -5.98954, -8.06764, -12.2579, -14.2175, -8.66959, -6.30065, -4.77024, -3.637, -2.73672, -1.99002, -1.35243, -0.796498, -0.304104, 0.137362, 0.537021, 0.901684, 1.23657, 1.54577, 1.83254, 2.09953, 2.34891, 2.58249, 2.80178, 3.00807, 3.20245, 3.38588, 3.55917, 3.72305, 3.87813, 4.02497, 4.16406, 4.29584, 4.42068, 4.53895, 4.65094, 4.75694, 4.85719, 4.95193, 5.04135, 5.12565, 5.20499, 5.27951, 5.34936, 5.41467, 5.47553, 5.53205, 5.58433, 5.63243, 5.67644, 5.71642, 5.75241, 5.78447, 5.81264, 5.83695, 5.85743, 5.8741, 5.88698, 5.89606, 5.90136, 5.90287, 5.90058, 5.89447, 5.88452, 5.87071, 5.85299, 5.83132, 5.80565, 5.77593, 5.74209, 5.70406, 5.66175, 5.61507, 5.56392, 5.50819, 5.44774, 5.38245, 5.31214, 5.23667, 5.15582, 5.06941, 4.97719, 4.87892, 4.77431, 4.66303, 4.54475, 4.41907, 4.28555, 4.14368, 3.99291, 3.83261, 3.66203, 3.48036, 3.28662, 3.0797, 2.85829, 2.62084, 2.36553, 2.09012, 1.79192, 1.4676, 1.11297, 0.722687, 0.28974, -0.195264, -0.745358, -1.37937, -2.12594, -3.03188, -4.18166, -5.75328, -8.24319, -14.7008, -10.8644, -7.04412, -5.04902, -3.69229, -2.66506, -1.83988, -1.15162, -0.562525, -0.0487022, 0.405901, 0.8126, 1.17967, 1.51334, 1.81841, 2.09869, 2.3572, 2.5964, 2.81834, 3.02471, 3.21694, 3.39623, 3.56361, 3.71999, 3.86612, 4.00268, 4.13026, 4.24936, 4.36045, 4.46391, 4.56011, 4.64935, 4.73192, 4.80806, 4.87798, 4.94187, 4.99991, 5.05225, 5.099, 5.14029, 5.1762, 5.20682, 5.23221, 5.25242, 5.26748, 5.27742, 5.28226, 5.28198, 5.27657, 5.26601, 5.25025, 5.22924, 5.2029, 5.17116, 5.13391, 5.09104, 5.04241, 4.98787, 4.92723, 4.8603, 4.78685, 4.70662, 4.61933, 4.52464, 4.42219, 4.31155, 4.19226, 4.06376, 3.92545, 3.77662, 3.61646, 3.44401, 3.25818, 3.05769, 2.84101, 2.60632, 2.35143, 2.07368, 1.76975, 1.43549, 1.06561, 0.653149, 0.188802, -0.340352, -0.952952, -1.67734, -2.55973, -3.68329, -5.22252, -7.6596, -13.8421, -10.4663, -6.54087, -4.50444, -3.11832, -2.06599, -1.21767, -0.50733, 0.103262, 0.638236, 1.1138, 1.54137, 1.92929, 2.28385, 2.60989, 2.91124, 3.19096, 3.45154, 3.69505, 3.9232, 4.13744, 4.339, 4.52893, 4.70815, 4.87745, 5.03752, 5.18896, 5.33232, 5.46808, 5.59664, 5.71841, 5.83371, 5.94284, 6.0461, 6.14371, 6.23591, 6.3229, 6.40487, 6.48198, 6.55439, 6.62223, 6.68563, 6.7447, 6.79955, 6.85027, 6.89694, 6.93965, 6.97846, 7.01343, 7.04462, 7.07207, 7.09583, 7.11593, 7.1324, 7.14527, 7.15455, 7.16026, 7.1624, 7.16099, 7.15601, 7.14747, 7.13534, 7.11962, 7.10027, 7.07727, 7.0506, 7.0202, 6.98603, 6.94803, 6.90616, 6.86035, 6.81051, 6.75658, 6.69845, 6.63602, 6.5692, 6.49785, 6.42184, 6.34103, 6.25526, 6.16433, 6.06807, 5.96626, 5.85864, 5.74497, 5.62495, 5.49825, 5.36452, 5.22334, 5.07427, 4.91679, 4.75032, 4.57422, 4.38773, 4.19, 3.98003, 3.75668, 3.5186, 3.26418, 2.99154, 2.69838, 2.38191, 2.03865, 1.66425, 1.2531, 0.797858, 0.288607, -0.288496, -0.9536, -1.7377, -2.69217, -3.91173, -5.60332, -8.38848, -18.0799, -9.47843, -6.19964, -4.36827, -3.09676, -2.12547, -1.34214, -0.68791, -0.128052, 0.35965, 0.790267, 1.17449, 1.52019, 1.83331, 2.11844, 2.37924, 2.61861, 2.83895, 3.04221, 3.23003, 3.40379, 3.56466, 3.71365, 3.8516, 3.97927, 4.0973, 4.20625, 4.30663, 4.39885, 4.48331, 4.56033, 4.63021, 4.69321, 4.74956, 4.79944, 4.84305, 4.88051, 4.91196, 4.93751, 4.95724, 4.97122, 4.9795, 4.98211, 4.97908, 4.97041, 4.95608, 4.93606, 4.91032, 4.87878, 4.84136, 4.79797, 4.74848, 4.69276, 4.63064, 4.56193, 4.48643, 4.40387, 4.31398, 4.21645, 4.1109, 3.99693, 3.87407, 3.74178, 3.59944, 3.44636, 3.28172, 3.10457, 2.91383, 2.70819, 2.48613, 2.24582, 1.98505, 1.70115, 1.39078, 1.04975, 0.672713, 0.252655, -0.219849, -0.757881, -1.38035, -2.11609, -3.01223, -4.154, -5.72154, -8.22007, -14.8311, -10.6858, -6.90328, -4.90967, -3.54749, -2.51236, -1.67813, -0.980209, -0.381084, 0.143, 0.608024, 1.02527, 1.40297, 1.74737, 2.06325, 2.35441, 2.62388, 2.87413, 3.10722, 3.32484, 3.52842, 3.71919, 3.89819, 4.06632, 4.22436, 4.37301, 4.51286, 4.64443, 4.76821, 4.88459, 4.99396, 5.09665, 5.19295, 5.28313, 5.36743, 5.44606, 5.51921, 5.58706, 5.64977, 5.70748, 5.76031, 5.80837, 5.85177, 5.89059, 5.92492, 5.95482, 5.98035, 6.00155, 6.01848, 6.03116, 6.03962, 6.04387, 6.04393, 6.03979, 6.03146, 6.01891, 6.00212, 5.98107, 5.95572, 5.92602, 5.89191, 5.85334
 };


 #endif /* MULTIPATH_V3_M12_H_ */
 

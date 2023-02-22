#include "right_triangle.h"
#include <iostream>


Right_Triangle:: Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, std::string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, 90, name) {}
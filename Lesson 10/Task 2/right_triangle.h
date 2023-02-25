#pragma once
#include "triangle.h"
#include <iostream>

class Right_Triangle :public Triangle {
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, std::string name);
};
#pragma once
#include "triangle.h"
#include <iostream>

class Isosceles_Triangle :public Triangle {
public:
	Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name);
};
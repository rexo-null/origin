#pragma once
#include "quadrangle.h"
#include <iostream>

class Rhomb :public Quadrangle {
public:
	Rhomb(int side, int angle_A, int angle_B, int angle_C, int angle_D, std::string name);
};
#pragma once
#include "figure.h"

class Quadrangle :public Figure {
public:
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, std::string name);

	void print_myself() override;

protected:
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;
};
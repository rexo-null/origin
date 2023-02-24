#pragma once
#include "figure.h"

class Triangle : public Figure {
public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name, bool start_status);

protected:
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;

	void check() override;
};
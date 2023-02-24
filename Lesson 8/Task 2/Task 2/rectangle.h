#pragma once
#include "quadrangle.h"
#include <iostream>

class Rectangle :public Quadrangle {
public:
	Rectangle(int side_a, int side_b, int side_c, int side_d, int angle, std::string name);

protected:
	void check() override;
};

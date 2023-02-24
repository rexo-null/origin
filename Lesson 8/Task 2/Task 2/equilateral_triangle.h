#pragma once
#include "triangle.h"
#include <iostream>

class Equilateral_Triangle :public Triangle {
public:
	Equilateral_Triangle(int side, int angle, std::string name);

protected:
	void check() override;
};
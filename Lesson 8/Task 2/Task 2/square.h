#pragma once
#include "quadrangle.h"
#include <iostream>

class Square :public Quadrangle {
public:
	Square(int side, int angle, std::string name);
};
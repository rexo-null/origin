#include "square.h"
#include <iostream>

Square::Square(int side, int angle, std::string name) : Quadrangle(side, side, side, side, angle, angle, angle, angle, name) {}
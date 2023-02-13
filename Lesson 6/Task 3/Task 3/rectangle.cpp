#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(int side_a, int side_b, int side_c, int side_d, int angle, std::string name) :Quadrangle(side_a, side_b, side_c, side_d, angle, angle, angle, angle, name) {}
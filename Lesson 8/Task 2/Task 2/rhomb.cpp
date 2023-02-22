#include "rhomb.h"
#include <iostream>

Rhomb::Rhomb(int side, int angle_A, int angle_B, int angle_C, int angle_D, std::string name) :Quadrangle(side, side, side, side, angle_A, angle_B, angle_C, angle_D, name) {}
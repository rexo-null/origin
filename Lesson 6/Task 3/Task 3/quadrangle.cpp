#include "quadrangle.h"
#include <iostream>


Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, std::string name) :Figure(4, name) {
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->side_d = side_d;
	this->angle_A = angle_A;
	this->angle_B = angle_B;
	this->angle_C = angle_C;
	this->angle_D = angle_D;
}

void Quadrangle::print_myself() {
	std::cout << get_name() << ":\n";
	std::cout << "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << "\n";
	std::cout << "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->side_d << "\n\n";
}
#include "triangle.h"
#include <iostream>

Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name) :Figure(3, name){
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->angle_A = angle_A;
	this->angle_B = angle_B;
	this->angle_C = angle_C;
}

void Triangle::print_myself() {
	std::cout << get_name() << ":\n";
	std::cout << "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << "\n";
	std::cout << "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << "\n\n";
}
#include "rhomb.h"
#include <iostream>

Rhomb::Rhomb(int side, int angle_A, int angle_B, int angle_C, int angle_D, std::string name) :Quadrangle(side, side, side, side, angle_A, angle_B, angle_C, angle_D, name, false) {
	try {
		check();
		std::cout << name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; углы: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") создан\n";
	}
	catch (figure_exception& ex) {
		std::cout << "ќшибка создани€ фигуры - " << name << ". ѕричина " << ex.what();
	}
}

void Rhomb::check() {
	side_a == this->side_b ? 0 : throw figure_exception("стороны a и b не равны\n");
	side_b == side_c ? 0 : throw figure_exception("стороны b и c не равны\n");
	side_c == side_d ? 0 : throw figure_exception("стороны c и d не равны\n");
	angle_A == angle_C ? 0 : throw figure_exception("углы A и C не равны\n");
	angle_B == angle_D ? 0 : throw figure_exception("углы B и D не равны\n");
}
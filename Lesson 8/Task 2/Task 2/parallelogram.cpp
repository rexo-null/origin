#include "parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, std::string name) :Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name, false) {
	try {
		check();
		std::cout << name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; углы: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") создан\n";
	}
	catch (figure_exception& ex) {
		std::cout << "ќшибка создани€ фигуры - " << name << ". ѕричина: " << ex.what();
	}
}

void Parallelogram::check() {
	side_a == side_c ? 0 : throw figure_exception("стороны а и с не равны\n");
	side_b == side_d ? 0 : throw figure_exception("стороны b и d не равны\n");
	angle_A == angle_C ? 0 : throw figure_exception("углы A и C не равны\n");
	angle_B == angle_D ? 0 : throw figure_exception("углы B и D не равны\n");
}
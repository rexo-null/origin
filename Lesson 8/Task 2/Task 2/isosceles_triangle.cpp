#include "isosceles_triangle.h"
#include <iostream>


Isosceles_Triangle::Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name, false) {
	try {
		check();
		std::cout << name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << "; углы: " << angle_A << ", " << angle_B << ", " << angle_C << ") создан\n";
	}

	catch (figure_exception& ex) {
		std::cout << "Ошибка создания фигуры - " << name << ". Причина: " << ex.what();
	}
}

void Isosceles_Triangle::check() {
	side_a == side_c ? 0 : throw figure_exception("стороны a и c не равны\n");
	angle_A == angle_C ? 0 : throw figure_exception("углы A и C не равны\n");
}
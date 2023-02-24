#include "equilateral_triangle.h"
#include <iostream>

Equilateral_Triangle::Equilateral_Triangle(int side, int angle, std::string name) :Triangle(side, side, side, angle, angle, angle, name, false) {
	try {
		check();
		std::cout << name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << "; углы: " << angle_A << ", " << angle_B << ", " << angle_C << ") создан\n";
	}
	catch (figure_exception& ex) {
		std::cout << "Ошибка создания фигуры - " << name << ". Причина: " << ex.what();
	}
}

void Equilateral_Triangle::check() {
	side_a == side_b ? 0 : throw figure_exception("стороны a и b не равны\n");
	side_b == side_c ? 0 : throw figure_exception("стороны b и c не равны\n");
	angle_A == 60 ? 0 : throw figure_exception("угол A не равен 60 градусам\n");
	angle_B == 60 ? 0 : throw figure_exception("угол B не равен 60 градусам\n");
	angle_C == 60 ? 0 : throw figure_exception("угол C не равен 60 градусам\n");
}
#include "square.h"
#include <iostream>

Square::Square(int side, int angle, std::string name) : Quadrangle(side, side, side, side, angle, angle, angle, angle, name, false) {
	try {
		check();
		std::cout << name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; углы: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") создан\n";
	}
	catch (figure_exception& ex) {
		std::cout << "Ошибка создания фигуры - " << name << ". Причина " << ex.what();
	}
}

void Square::check() {
	side_a == side_b ? 0 : throw figure_exception("стороны a и b не равны\n");
	side_b == side_c ? 0 : throw figure_exception("стороны b и c не равны\n");
	side_c == side_d ? 0 : throw figure_exception("стороны c и d не равны\n");
	angle_A == 90 ? 0 : throw figure_exception("угол A не равен 90 градусам\n");
	angle_B == 90 ? 0 : throw figure_exception("угол B не равен 90 градусам\n");
	angle_C == 90 ? 0 : throw figure_exception("угол C не равен 90 градусам\n");
	angle_D == 90 ? 0 : throw figure_exception("угол D не равен 90 градусам\n");
}
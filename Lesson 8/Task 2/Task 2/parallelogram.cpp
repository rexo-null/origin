#include "parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, std::string name) :Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name, false) {
	try {
		check();
		std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; ����: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") ������\n";
	}
	catch (figure_exception& ex) {
		std::cout << "������ �������� ������ - " << name << ". �������: " << ex.what();
	}
}

void Parallelogram::check() {
	side_a == side_c ? 0 : throw figure_exception("������� � � � �� �����\n");
	side_b == side_d ? 0 : throw figure_exception("������� b � d �� �����\n");
	angle_A == angle_C ? 0 : throw figure_exception("���� A � C �� �����\n");
	angle_B == angle_D ? 0 : throw figure_exception("���� B � D �� �����\n");
}
#include "rhomb.h"
#include <iostream>

Rhomb::Rhomb(int side, int angle_A, int angle_B, int angle_C, int angle_D, std::string name) :Quadrangle(side, side, side, side, angle_A, angle_B, angle_C, angle_D, name, false) {
	try {
		check();
		std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; ����: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") ������\n";
	}
	catch (figure_exception& ex) {
		std::cout << "������ �������� ������ - " << name << ". ������� " << ex.what();
	}
}

void Rhomb::check() {
	side_a == this->side_b ? 0 : throw figure_exception("������� a � b �� �����\n");
	side_b == side_c ? 0 : throw figure_exception("������� b � c �� �����\n");
	side_c == side_d ? 0 : throw figure_exception("������� c � d �� �����\n");
	angle_A == angle_C ? 0 : throw figure_exception("���� A � C �� �����\n");
	angle_B == angle_D ? 0 : throw figure_exception("���� B � D �� �����\n");
}
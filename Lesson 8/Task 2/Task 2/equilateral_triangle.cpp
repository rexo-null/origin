#include "equilateral_triangle.h"
#include <iostream>

Equilateral_Triangle::Equilateral_Triangle(int side, int angle, std::string name) :Triangle(side, side, side, angle, angle, angle, name, false) {
	try {
		check();
		std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << "; ����: " << angle_A << ", " << angle_B << ", " << angle_C << ") ������\n";
	}
	catch (figure_exception& ex) {
		std::cout << "������ �������� ������ - " << name << ". �������: " << ex.what();
	}
}

void Equilateral_Triangle::check() {
	side_a == side_b ? 0 : throw figure_exception("������� a � b �� �����\n");
	side_b == side_c ? 0 : throw figure_exception("������� b � c �� �����\n");
	angle_A == 60 ? 0 : throw figure_exception("���� A �� ����� 60 ��������\n");
	angle_B == 60 ? 0 : throw figure_exception("���� B �� ����� 60 ��������\n");
	angle_C == 60 ? 0 : throw figure_exception("���� C �� ����� 60 ��������\n");
}
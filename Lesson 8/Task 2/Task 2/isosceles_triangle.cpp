#include "isosceles_triangle.h"
#include <iostream>


Isosceles_Triangle::Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name, false) {
	try {
		check();
		std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << "; ����: " << angle_A << ", " << angle_B << ", " << angle_C << ") ������\n";
	}

	catch (figure_exception& ex) {
		std::cout << "������ �������� ������ - " << name << ". �������: " << ex.what();
	}
}

void Isosceles_Triangle::check() {
	side_a == side_c ? 0 : throw figure_exception("������� a � c �� �����\n");
	angle_A == angle_C ? 0 : throw figure_exception("���� A � C �� �����\n");
}
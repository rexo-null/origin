#include "right_triangle.h"
#include <iostream>


Right_Triangle:: Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name, false) {
	try {
		check();
		std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << "; ����: " << angle_A << ", " << angle_B << ", " << this->angle_C << ") ������\n";
	}
	catch (figure_exception& ex) {
		std::cout << "������ �������� ������ - " << name << ". �������: " << ex.what();
	}
}

void Right_Triangle::check() {
	this->angle_C == 90 ? 0 : throw figure_exception("���� C �� ����� 90 ��������\n");
}
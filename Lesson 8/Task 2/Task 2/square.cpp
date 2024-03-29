#include "square.h"
#include <iostream>

Square::Square(int side, int angle, std::string name) : Quadrangle(side, side, side, side, angle, angle, angle, angle, name, false) {
	try {
		check();
		std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; ����: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") ������\n";
	}
	catch (figure_exception& ex) {
		std::cout << "������ �������� ������ - " << name << ". ������� " << ex.what();
	}
}

void Square::check() {
	side_a == side_b ? 0 : throw figure_exception("������� a � b �� �����\n");
	side_b == side_c ? 0 : throw figure_exception("������� b � c �� �����\n");
	side_c == side_d ? 0 : throw figure_exception("������� c � d �� �����\n");
	angle_A == 90 ? 0 : throw figure_exception("���� A �� ����� 90 ��������\n");
	angle_B == 90 ? 0 : throw figure_exception("���� B �� ����� 90 ��������\n");
	angle_C == 90 ? 0 : throw figure_exception("���� C �� ����� 90 ��������\n");
	angle_D == 90 ? 0 : throw figure_exception("���� D �� ����� 90 ��������\n");
}
#include "triangle.h"
#include <iostream>

Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, std::string name, bool start_status) :Figure(3, name, false) {
	if(start_status == true) {
		try {
			this->side_a = side_a;
			this->side_b = side_b;
			this->side_c = side_c;
			this->angle_A = angle_A;
			this->angle_B = angle_B;
			this->angle_C = angle_C;
			check();
			std::cout << name << " (�������: " << side_a << ", " << side_b << ", " << side_c << "; ����: " << angle_A << ", " << angle_B << ", " << angle_C << ") ������\n";
		}

		catch (figure_exception& ex) {
			std::cout << "������ �������� ������ - " << name << ". �������: " << ex.what();
		}
	}
	else {
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}
}

void Triangle::check() {
	sides_count == 3 ? 0 : throw figure_exception("���-�� ������ �� ����� 3\n");
	(this->angle_A + this->angle_B + this->angle_C) == 180 ? 0 : throw figure_exception("����� ����� �� ����� 180\n");
}
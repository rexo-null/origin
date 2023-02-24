#include "quadrangle.h"
#include <iostream>


Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, std::string name, bool start_status) :Figure(4, name, false) {
	if (start_status == true) {
		try {
			this->side_a = side_a;
			this->side_b = side_b;
			this->side_c = side_c;
			this->side_d = side_d;
			this->angle_A = angle_A;
			this->angle_B = angle_B;
			this->angle_C = angle_C;
			this->angle_D = angle_D;
			check();
			std::cout << name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; углы: " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") создан\n";

		}
		catch (figure_exception& ex) {
			std::cout << "Ошибка создания фигуры - " << name << ". Причина: " << ex.what();
		}
	}
	else {
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->side_d = side_d;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
		this->angle_D = angle_D;
	}
}

void Quadrangle::check() {
	sides_count == 4 ? 0 : throw figure_exception("кол-во сторон не равно 4\n");
	(angle_A + angle_B + angle_C + angle_D) == 360 ? 0 : throw figure_exception("сумма углов не равна 360\n");
}
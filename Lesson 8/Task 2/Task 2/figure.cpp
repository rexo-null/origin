#include <iostream>
#include "figure_exception.h"
#include "figure.h"

Figure::Figure(int sides_count, std::string name, bool start_status) {
	if (start_status == true) {
		try {
			this->name = name;
			this->sides_count = sides_count;
			check();
			std::cout << name << " (�������: " << sides_count << ") ������.\n";
		}

		catch (figure_exception& ex) {
			std::cout << "������ �������� ������ - " << name << ". �������: " << ex.what();
		}
	}
	else {
		this->name = name;
		this->sides_count = sides_count;
	}
}

void Figure::check() {
	sides_count == 0 ? 0 : throw figure_exception("���-�� ������ �� ����� ����\n");
}
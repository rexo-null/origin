#include <iostream>
#include "RaceLib.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int choice;

	cout << "����� ���������� � �������� ���������!\n"
			"1. ����� ��� ��������� ����������\n"
			"2. ����� ��� ���������� ����������\n"
			"3. ����� ��� ��������� � ���������� ����������\n"
			"�������� ��� �����: ";

	cin >> choice;

	if (choice == 1) {
		ground_race();
	}

	else if (choice == 2) {
		air_race();
	}

	else if (choice == 3) {
		race_together();
	}

	return 0;
}

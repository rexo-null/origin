#include <iostream>
#include "RaceLib.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int choice;

	while (true) {
		std::system("cls");
		cout << "����� ���������� � �������� ���������!\n"
			"1. ����� ��� ��������� ����������\n"
			"2. ����� ��� ���������� ����������\n"
			"3. ����� ��� ��������� � ���������� ����������\n"
			"�������� ��� �����: ";

		cin >> choice;

		if (choice == 1) {
			ground_race();
			continue;
		}

		else if (choice == 2) {
			air_race();
			continue;
		}

		else if (choice == 3) {
			race_together();
			continue;
		}
	}

	return 0;
}

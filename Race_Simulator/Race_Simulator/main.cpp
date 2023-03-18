#include <iostream>
#include "RaceLib.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int choice;

	cout << "Добро пожаловать в гоночный симулятор!\n"
			"1. Гонка для наземного транспорта\n"
			"2. Гонка для воздушного транспорта\n"
			"3. Гонка для наземного и воздушного транспорта\n"
			"Выберите тип гонки: ";

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

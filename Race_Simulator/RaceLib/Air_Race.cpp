#include "Air_Race.h"

void air_race() {
	vector<Transport*> race_team;

	int distance;
	int choice;

	system("cls");
	cout << "Укажите длину дистанции: ";
	cin >> distance;
	system("cls");

start:

	std::cout << "1. Зарегистрировать ТС\n";
	std::cout << "2. Начать гонку\n";
	std::cout << "Выберите действие: ";
	std::cin >> choice;

	if (choice == 1) {
		system("cls");

	menu:

		std::cout << "Гонка воздушного транспорта. Расстояние: " << distance << "\n";

		if (race_team.size() > 0) {
			std::cout << "Зарегистрированные транспортные средства: ";
			for (int i = 0; i < race_team.size(); i++) {
				std::cout << race_team[i]->get_name() << ", ";
			}
			std::cout << "\n";
		}

		else {
			std::cout << "Зарегистрированные транспортные средства: \n";
		}

		std::cout << "1. Метла\n"
			"2. Орёл\n"
			"3. Ковёр-самолёт\n"
			"0. Закончить регистрацию\n"
			"Выберите действие: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			race_team.push_back(new Eagle());
			system("cls");
			std::cout << "Орёл успешно зарегистрирован!\n";
			goto menu;
		case 2:
			race_team.push_back(new Broom());
			system("cls");
			std::cout << "Метла успешно зарегистрирована!\n";
			goto menu;
		case 3:
			race_team.push_back(new Magic_Carpet());
			system("cls");
			std::cout << "Ковёр-самолёт успешно зарегистрирован!\n";
			goto menu;
		case 0:
			system("cls");
			goto start;

		default:
			system("cls");
			std::cout << "Такое действие отсутствует, попробуйте снова\n";
			goto menu;
		}
	}

	else if (choice == 2) {
		if (race_team.size() < 2) {
			system("cls");
			std::cout << "Ошибка! Количество ТС не хватает для гонки (минимум 2)\n";
			goto start;
		}

		else {
			sort(race_team);
			show_result(race_team);
		}

		std::cout << "\n1. Провести еще одну гонку\n"
			"2. Выйти\n"
			"Выберите действие: ";
		std::cin >> choice;

		if (choice == 2) {
			exit(0);
		}
	}

}
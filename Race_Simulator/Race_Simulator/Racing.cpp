#include "Racing.h"

void ground_race() {
	vector<Transport*> race_team;

	int distance;

	std::system("cls");
	std::cout << "Укажите длину дистанции: ";
	std::cin >> distance;
	std::system("cls");

	while (true) {
		int choice;

		std::cout << "1. Зарегистрировать ТС\n";
		std::cout << "2. Начать гонку\n";
		std::cout << "Выберите действие: ";
		std::cin >> choice;

		if (choice == 1) {
			std::system("cls");
			while (true) {
				std::cout << "Гонка наземного транспорта. Расстояние: " << distance << "\n";

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

				std::cout << "1. Ботинки-вездеходы\n"
					"2. Верблюд\n"
					"3. Кентавр\n"
					"4. Верблюд-быстроход\n"
					"0. Закончить регистрацию\n"
					"Выберите действие: ";
				std::cin >> choice;

				switch (choice) {
				case 1:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Ботинки-вездеходы"); }) == race_team.end()) {
						race_team.push_back(new All_Terrain_Boots());
						std::system("cls");
						std::cout << "Ботинки-вездеходы успешно зарегистрированны!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 2:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Верблюд"); }) == race_team.end()) {
						race_team.push_back(new Camel());
						std::system("cls");
						std::cout << "Верблюд успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 3:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Кентавр"); }) == race_team.end()) {
						race_team.push_back(new Centaur());
						std::system("cls");
						std::cout << "Кентавр успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 4:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Верблюд-быстроход"); }) == race_team.end()) {
						race_team.push_back(new Faster_Camel());
						std::system("cls");
						std::cout << "Верблюд-быстроход успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 0:
					std::system("cls");
					break;

				default:
					std::system("cls");
					std::cout << "Такое действие отсутствует, попробуйте снова\n";
					continue;
				}
				break;
			}
		}

		else if (choice == 2) {
			if (race_team.size() < 2) {
				std::system("cls");
				std::cout << "Ошибка! Количество ТС не хватает для гонки (минимум 2)\n";
				continue;
			}

			else {
				for (int i = 0; i < race_team.size(); i++) {
					race_team[i]->race(distance);
				}

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
			break;
		}

		else {
			std::cout << "Такое действие отсутствует, попробуйте снова\n";
			continue;
		}
	}
}

void air_race() {
	vector<Transport*> race_team;

	int distance;

	std::system("cls");
	cout << "Укажите длину дистанции: ";
	cin >> distance;
	std::system("cls");

	while (true) {
		int choice;

		std::cout << "1. Зарегистрировать ТС\n";
		std::cout << "2. Начать гонку\n";
		std::cout << "Выберите действие: ";
		std::cin >> choice;

		if (choice == 1) {
			std::system("cls");
			while (true) {
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

				std::cout << "1. Орёл\n"
					"2. Метла\n"
					"3. Ковёр-самолёт\n"
					"0. Закончить регистрацию\n"
					"Выберите действие: ";
				std::cin >> choice;

				switch (choice) {
				case 1:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Орёл"); }) == race_team.end()) {
						race_team.push_back(new Eagle());
						std::system("cls");
						std::cout << "Орёл успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 2:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Метла"); }) == race_team.end()) {
						race_team.push_back(new Broom());
						std::system("cls");
						std::cout << "Метла успешно зарегистрирована!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 3:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Ковёр-самолёт"); }) == race_team.end()) {
						race_team.push_back(new Magic_Carpet());
						std::system("cls");
						std::cout << "Ковёр-самолёт успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 0:
					std::system("cls");
					break;

				default:
					std::system("cls");
					std::cout << "Такое действие отсутствует, попробуйте снова\n";
					continue;
				}
				break;
			}
		}

		else if (choice == 2) {
			if (race_team.size() < 2) {
				std::system("cls");
				std::cout << "Ошибка! Количество ТС не хватает для гонки (минимум 2)\n";
				continue;
			}

			else {
				for (int i = 0; i < race_team.size(); i++) {
					race_team[i]->race(distance);
				}

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
			break;
		}

		else {
			std::cout << "Такое действие отсутствует, попробуйте снова\n";
			continue;
		}
	}
}

void race_together() {
	vector<Transport*> race_team;

	int distance;

	std::system("cls");
	cout << "Укажите длину дистанции: ";
	cin >> distance;
	std::system("cls");

	while (true) {
		int choice;

		std::cout << "1. Зарегистрировать ТС\n";
		std::cout << "2. Начать гонку\n";
		std::cout << "Выберите действие: ";
		std::cin >> choice;

		if (choice == 1) {
			std::system("cls");
			while (true) {
				std::cout << "Гонка воздушного и наземного транспорта. Расстояние: " << distance << "\n";

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

				std::cout << "1. Орёл\n"
					"2. Метла\n"
					"3. Ковёр-самолёт\n"
					"4. Ботинки-вездеходы\n"
					"5. Верблюд\n"
					"6. Кентавр\n"
					"7. Верблюд-быстроход\n"
					"0. Закончить регистрацию\n"
					"Выберите действие: ";
				std::cin >> choice;

				switch (choice) {
				case 1:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Орёл"); }) == race_team.end()) {
						race_team.push_back(new Eagle());
						std::system("cls");
						std::cout << "Орёл успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 2:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Метла"); }) == race_team.end()) {
						race_team.push_back(new Broom());
						std::system("cls");
						std::cout << "Метла успешно зарегистрирована!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 3:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Ковёр-самолёт"); }) == race_team.end()) {
						race_team.push_back(new Magic_Carpet());
						std::system("cls");
						std::cout << "Ковёр-самолёт успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 4:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Ботинки-вездеходы"); }) == race_team.end()) {
						race_team.push_back(new All_Terrain_Boots());
						std::system("cls");
						std::cout << "Ботинки-вездеходы успешно зарегистрированны!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
					}
				case 5:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Верблюд"); }) == race_team.end()) {
						race_team.push_back(new Camel());
						std::system("cls");
						std::cout << "Верблюд успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
						}
				case 6:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Кентавр"); }) == race_team.end()) {
						race_team.push_back(new Centaur());
						std::system("cls");
						std::cout << "Кентавр успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
						}
				case 7:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("Верблюд-быстроход"); }) == race_team.end()) {
						race_team.push_back(new Faster_Camel());
						std::system("cls");
						std::cout << "Верблюд-быстроход успешно зарегистрирован!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "Такой транспорт уже зарегестрирован!\n";
						continue;
						}
				case 0:
					std::system("cls");
					break;

				default:
					std::system("cls");
					std::cout << "Такое действие отсутствует, попробуйте снова\n";
					continue;
				}
				break;
			}
		}

		else if (choice == 2) {
			if (race_team.size() < 2) {
				std::system("cls");
				std::cout << "Ошибка! Количество ТС не хватает для гонки (минимум 2)\n";
				continue;
			}

			else {
				for (int i = 0; i < race_team.size(); i++) {
					race_team[i]->race(distance);
				}
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
			break;
		}

		else {
			std::cout << "Такое действие отсутствует, попробуйте снова\n";
			continue;
		}
	}
}
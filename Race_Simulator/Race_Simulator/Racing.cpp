#include "Racing.h"

void ground_race() {
	vector<Transport*> race_team;

	int distance;

	std::system("cls");
	std::cout << "������� ����� ���������: ";
	std::cin >> distance;
	std::system("cls");

	while (true) {
		int choice;

		std::cout << "1. ���������������� ��\n";
		std::cout << "2. ������ �����\n";
		std::cout << "�������� ��������: ";
		std::cin >> choice;

		if (choice == 1) {
			std::system("cls");
			while (true) {
				std::cout << "����� ��������� ����������. ����������: " << distance << "\n";

				if (race_team.size() > 0) {
					std::cout << "������������������ ������������ ��������: ";
					for (int i = 0; i < race_team.size(); i++) {
						std::cout << race_team[i]->get_name() << ", ";
					}
					std::cout << "\n";
				}

				else {
					std::cout << "������������������ ������������ ��������: \n";
				}

				std::cout << "1. �������-���������\n"
					"2. �������\n"
					"3. �������\n"
					"4. �������-���������\n"
					"0. ��������� �����������\n"
					"�������� ��������: ";
				std::cin >> choice;

				switch (choice) {
				case 1:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������-���������"); }) == race_team.end()) {
						race_team.push_back(new All_Terrain_Boots());
						std::system("cls");
						std::cout << "�������-��������� ������� �����������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 2:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������"); }) == race_team.end()) {
						race_team.push_back(new Camel());
						std::system("cls");
						std::cout << "������� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 3:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������"); }) == race_team.end()) {
						race_team.push_back(new Centaur());
						std::system("cls");
						std::cout << "������� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 4:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������-���������"); }) == race_team.end()) {
						race_team.push_back(new Faster_Camel());
						std::system("cls");
						std::cout << "�������-��������� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 0:
					std::system("cls");
					break;

				default:
					std::system("cls");
					std::cout << "����� �������� �����������, ���������� �����\n";
					continue;
				}
				break;
			}
		}

		else if (choice == 2) {
			if (race_team.size() < 2) {
				std::system("cls");
				std::cout << "������! ���������� �� �� ������� ��� ����� (������� 2)\n";
				continue;
			}

			else {
				for (int i = 0; i < race_team.size(); i++) {
					race_team[i]->race(distance);
				}

				sort(race_team);
				show_result(race_team);
			}

			std::cout << "\n1. �������� ��� ���� �����\n"
				"2. �����\n"
				"�������� ��������: ";
			std::cin >> choice;

			if (choice == 2) {
				exit(0);
			}
			break;
		}

		else {
			std::cout << "����� �������� �����������, ���������� �����\n";
			continue;
		}
	}
}

void air_race() {
	vector<Transport*> race_team;

	int distance;

	std::system("cls");
	cout << "������� ����� ���������: ";
	cin >> distance;
	std::system("cls");

	while (true) {
		int choice;

		std::cout << "1. ���������������� ��\n";
		std::cout << "2. ������ �����\n";
		std::cout << "�������� ��������: ";
		std::cin >> choice;

		if (choice == 1) {
			std::system("cls");
			while (true) {
				std::cout << "����� ���������� ����������. ����������: " << distance << "\n";

				if (race_team.size() > 0) {
					std::cout << "������������������ ������������ ��������: ";
					for (int i = 0; i < race_team.size(); i++) {
						std::cout << race_team[i]->get_name() << ", ";
					}
					std::cout << "\n";
				}

				else {
					std::cout << "������������������ ������������ ��������: \n";
				}

				std::cout << "1. ���\n"
					"2. �����\n"
					"3. ����-������\n"
					"0. ��������� �����������\n"
					"�������� ��������: ";
				std::cin >> choice;

				switch (choice) {
				case 1:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("���"); }) == race_team.end()) {
						race_team.push_back(new Eagle());
						std::system("cls");
						std::cout << "��� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 2:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�����"); }) == race_team.end()) {
						race_team.push_back(new Broom());
						std::system("cls");
						std::cout << "����� ������� ����������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 3:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("����-������"); }) == race_team.end()) {
						race_team.push_back(new Magic_Carpet());
						std::system("cls");
						std::cout << "����-������ ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 0:
					std::system("cls");
					break;

				default:
					std::system("cls");
					std::cout << "����� �������� �����������, ���������� �����\n";
					continue;
				}
				break;
			}
		}

		else if (choice == 2) {
			if (race_team.size() < 2) {
				std::system("cls");
				std::cout << "������! ���������� �� �� ������� ��� ����� (������� 2)\n";
				continue;
			}

			else {
				for (int i = 0; i < race_team.size(); i++) {
					race_team[i]->race(distance);
				}

				sort(race_team);
				show_result(race_team);
			}

			std::cout << "\n1. �������� ��� ���� �����\n"
				"2. �����\n"
				"�������� ��������: ";
			std::cin >> choice;

			if (choice == 2) {
				exit(0);
			}
			break;
		}

		else {
			std::cout << "����� �������� �����������, ���������� �����\n";
			continue;
		}
	}
}

void race_together() {
	vector<Transport*> race_team;

	int distance;

	std::system("cls");
	cout << "������� ����� ���������: ";
	cin >> distance;
	std::system("cls");

	while (true) {
		int choice;

		std::cout << "1. ���������������� ��\n";
		std::cout << "2. ������ �����\n";
		std::cout << "�������� ��������: ";
		std::cin >> choice;

		if (choice == 1) {
			std::system("cls");
			while (true) {
				std::cout << "����� ���������� � ��������� ����������. ����������: " << distance << "\n";

				if (race_team.size() > 0) {
					std::cout << "������������������ ������������ ��������: ";
					for (int i = 0; i < race_team.size(); i++) {
						std::cout << race_team[i]->get_name() << ", ";
					}
					std::cout << "\n";
				}

				else {
					std::cout << "������������������ ������������ ��������: \n";
				}

				std::cout << "1. ���\n"
					"2. �����\n"
					"3. ����-������\n"
					"4. �������-���������\n"
					"5. �������\n"
					"6. �������\n"
					"7. �������-���������\n"
					"0. ��������� �����������\n"
					"�������� ��������: ";
				std::cin >> choice;

				switch (choice) {
				case 1:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("���"); }) == race_team.end()) {
						race_team.push_back(new Eagle());
						std::system("cls");
						std::cout << "��� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 2:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�����"); }) == race_team.end()) {
						race_team.push_back(new Broom());
						std::system("cls");
						std::cout << "����� ������� ����������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 3:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("����-������"); }) == race_team.end()) {
						race_team.push_back(new Magic_Carpet());
						std::system("cls");
						std::cout << "����-������ ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 4:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������-���������"); }) == race_team.end()) {
						race_team.push_back(new All_Terrain_Boots());
						std::system("cls");
						std::cout << "�������-��������� ������� �����������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
					}
				case 5:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������"); }) == race_team.end()) {
						race_team.push_back(new Camel());
						std::system("cls");
						std::cout << "������� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
						}
				case 6:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������"); }) == race_team.end()) {
						race_team.push_back(new Centaur());
						std::system("cls");
						std::cout << "������� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
						}
				case 7:
					if (std::find_if(race_team.begin(), race_team.end(), [](Transport*& obj) {return obj->get_name() == string("�������-���������"); }) == race_team.end()) {
						race_team.push_back(new Faster_Camel());
						std::system("cls");
						std::cout << "�������-��������� ������� ���������������!\n";
						continue;
					}

					else {
						std::system("cls");
						std::cout << "����� ��������� ��� ���������������!\n";
						continue;
						}
				case 0:
					std::system("cls");
					break;

				default:
					std::system("cls");
					std::cout << "����� �������� �����������, ���������� �����\n";
					continue;
				}
				break;
			}
		}

		else if (choice == 2) {
			if (race_team.size() < 2) {
				std::system("cls");
				std::cout << "������! ���������� �� �� ������� ��� ����� (������� 2)\n";
				continue;
			}

			else {
				for (int i = 0; i < race_team.size(); i++) {
					race_team[i]->race(distance);
				}
				sort(race_team);
				show_result(race_team);
			}

			std::cout << "\n1. �������� ��� ���� �����\n"
				"2. �����\n"
				"�������� ��������: ";
			std::cin >> choice;

			if (choice == 2) {
				exit(0);
			}
			break;
		}

		else {
			std::cout << "����� �������� �����������, ���������� �����\n";
			continue;
		}
	}
}
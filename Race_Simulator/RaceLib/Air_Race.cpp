#include "Air_Race.h"

void air_race() {
	vector<Transport*> race_team;

	int distance;
	int choice;

	system("cls");
	cout << "������� ����� ���������: ";
	cin >> distance;
	system("cls");

start:

	std::cout << "1. ���������������� ��\n";
	std::cout << "2. ������ �����\n";
	std::cout << "�������� ��������: ";
	std::cin >> choice;

	if (choice == 1) {
		system("cls");

	menu:

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

		std::cout << "1. �����\n"
			"2. ���\n"
			"3. ����-������\n"
			"0. ��������� �����������\n"
			"�������� ��������: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			race_team.push_back(new Eagle());
			system("cls");
			std::cout << "��� ������� ���������������!\n";
			goto menu;
		case 2:
			race_team.push_back(new Broom());
			system("cls");
			std::cout << "����� ������� ����������������!\n";
			goto menu;
		case 3:
			race_team.push_back(new Magic_Carpet());
			system("cls");
			std::cout << "����-������ ������� ���������������!\n";
			goto menu;
		case 0:
			system("cls");
			goto start;

		default:
			system("cls");
			std::cout << "����� �������� �����������, ���������� �����\n";
			goto menu;
		}
	}

	else if (choice == 2) {
		if (race_team.size() < 2) {
			system("cls");
			std::cout << "������! ���������� �� �� ������� ��� ����� (������� 2)\n";
			goto start;
		}

		else {
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
	}

}
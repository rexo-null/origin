#include "Show_Result.h"

void show_result(vector<Transport*>& team) {
	system("cls");

	cout << "���������� �����:\n";

	for (int i = 0; i < team.size(); i++) {
		cout << i + 1 << ". " << team[i]->get_name() << ". �����: " << team[i]->get_race_time() << "\n";
	}
}
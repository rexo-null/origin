#include "Show_Result.h"

void show_result(vector<Transport*>& team) {
	system("cls");

	cout << "Результаты гонки:\n";

	for (int i = 0; i < team.size(); i++) {
		cout << i + 1 << ". " << team[i]->get_name() << ". Время: " << team[i]->get_race_time() << "\n";
	}
}
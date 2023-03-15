#include "Sort.h"

void sort(vector<Transport*>& team) {
	for (int i = 0; i < team.size(); i++) {
		for (int j = i + 1; j < team.size(); j++) {
			if (team[i]->get_race_time() > team[j]->get_race_time()) {
				Transport* intermediate_ptr = team[i];

				team[i] = team[j];
				team[j] = intermediate_ptr;
			}
		}
	}
}
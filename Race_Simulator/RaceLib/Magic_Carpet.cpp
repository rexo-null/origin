#include "Magic_Carpet.h"

Magic_Carpet::Magic_Carpet() : Air_Transport("Ковёр-самолёт", 10, 0.01) {}

void Magic_Carpet::race(int distance) {
	if (distance >= 1000 && distance < 5000) {
		this->race_time = (distance / this->speed) * (reduction_ratio * 3);
	}

	else if (distance >= 5000 && distance < 10000) {
		this->race_time = (distance / this->speed) * (reduction_ratio * 10);
	}

	else if (distance >= 10000) {
		this->race_time = (distance / this->speed) * (reduction_ratio * 5);
	}
}
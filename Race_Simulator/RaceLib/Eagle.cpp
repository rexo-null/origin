#include "Eagle.h"

Eagle::Eagle() : Air_Transport("���", 8, 0.06) {}

void Eagle::race(int distance) {
	int time = (distance / this->speed);
	this->race_time = time - (time * this->reduction_ratio);
}
#include "Eagle.h"

Eagle::Eagle() : Air_Transport("���", 8, 0.06) {}

void Eagle::race(int distance) {
	this->race_time = distance / this->speed * this->reduction_ratio;
}
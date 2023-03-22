#include "Broom.h"

Broom::Broom() : Air_Transport("Метла", 20, 0.01) {};

void Broom::race(int distance) {
	int time = distance / this->speed;
	this->race_time = time - (time * (this->reduction_ratio * (distance / 1000)));
}
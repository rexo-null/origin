#include "Broom.h"

Broom::Broom() : Air_Transport("Метла", 20, 0.01) {};

void Broom::race(int distance) {
	this->race_time = (distance / this->speed) * (this->reduction_ratio * (distance / 1000));
}
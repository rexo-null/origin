#include "Centaur.h"

Centaur::Centaur() : Ground_Transport("Кентавр", 15, 8) {
	this->duration_rest = 2;
}

void Centaur::race(int distance) {
	this->race_time = distance / this->speed;

	if (this->race_time / this->frequency_rest > 0) {
		this->race_time += (this->race_time / this->frequency_rest) * this->duration_rest;
	}
}
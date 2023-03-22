#include "Centaur.h"

Centaur::Centaur() : Ground_Transport("Кентавр", 15, 8) {
	this->duration_rest = 2;
}

void Centaur::race(int distance) {
	int time = distance / this->speed;

	if (time / this->frequency_rest > 0) {
		this->race_time += (time / this->frequency_rest) * this->duration_rest;
	}

	this->race_time += time;
}
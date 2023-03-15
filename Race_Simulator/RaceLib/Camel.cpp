#include "Camel.h"

Camel::Camel() : Ground_Transport("Верблюд", 10, 30) {
	this->duration_first_rest = 10;
	this->duration_next_rest = 5;
}

void Camel::race(int distance) {
	this->race_time = distance / this->speed;

	if (this->race_time / this->frequency_rest == 1) {
		this->race_time += this->duration_first_rest;

		if (this->race_time / this->frequency_rest > 1) {
			this->race_time += (this->race_time / this->frequency_rest - 1) * this->duration_next_rest;
		}
	}
}
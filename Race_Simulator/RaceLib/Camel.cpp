#include "Camel.h"

Camel::Camel() : Ground_Transport("�������", 10, 30) {
	this->duration_first_rest = 10;
	this->duration_next_rest = 5;
}

void Camel::race(int distance) {
	int time = distance / this->speed;

	if (time / this->frequency_rest >= 1) {
		this->race_time += this->duration_first_rest;

		if (time / this->frequency_rest > 1) {
			this->race_time += (time / this->frequency_rest - 1) * this->duration_next_rest;
		}
	}

	this->race_time += time;
}
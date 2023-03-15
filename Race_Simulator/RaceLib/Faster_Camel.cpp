#include "Faster_Camel.h"

Faster_Camel::Faster_Camel() : Ground_Transport("Верблюд-быстроход", 40, 10) {
	this->duration_first_rest = 5;
	this->duration_second_rest = 6.5;
	this->duration_next_rest = 8;
}

void Faster_Camel::race(int distance) {
	this->race_time = distance / this->speed;;

	if (this->race_time / this->frequency_rest == 1) {
		this->race_time += this->duration_first_rest;

		if (this->race_time / this->frequency_rest == 2) {
			this->race_time += this->duration_second_rest;

			if (this->race_time / this->frequency_rest > 2) {
				this->race_time += (this->race_time / this->frequency_rest - 2) * this->duration_second_rest;
			}
		}
	}
}
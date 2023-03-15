#include "All_Terraint_Boots.h"

All_Terrain_Boots::All_Terrain_Boots() : Ground_Transport("Ботинки-вездеходы", 6, 60) {
	this->duration_first_rest = 10;
	this->duration_next_rest = 5;
}

void All_Terrain_Boots::race(int distance) {
	int time = distance / this->speed;

	if (time / this->frequency_rest == 1) {
		time += this->duration_first_rest;

		if (time / this->frequency_rest > 1) {
			time += (time / this->frequency_rest - 1) * this->duration_next_rest;
		}
	}

	this->race_time = time;
}
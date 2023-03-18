#include "Ground_Transport.h"

Ground_Transport::Ground_Transport(string name, int speed, int frequency_rest) : Transport(name, speed) {
	this->frequency_rest = frequency_rest;
}

void Ground_Transport::race(int distance) {};
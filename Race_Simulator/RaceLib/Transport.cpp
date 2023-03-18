#include "Transport.h"

Transport::Transport(string name, int speed) {
	this->name = name;
	this->speed = speed;
}

string Transport::get_name() {
	return this->name;
}

int Transport::get_race_time() {
	return this->race_time;
}

void Transport::race(int distance) {}
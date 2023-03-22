#include "Transport.h"

Transport::Transport(string name, double speed) {
	this->name = name;
	this->speed = speed;
	this->race_time = 0;
}

string Transport::get_name() {
	return this->name;
}

double Transport::get_race_time() {
	return this->race_time;
}

void Transport::race(int distance) {}
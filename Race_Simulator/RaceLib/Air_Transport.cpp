#include "Air_Transport.h"

Air_Transport::Air_Transport(string name, int speed, double reduction_ratio) : Transport(name, speed) {
	this->reduction_ratio = reduction_ratio;
}

void Air_Transport::race(int distance) {};
#pragma once

#include "Ground_Transport.h"

class Faster_Camel : public Ground_Transport {
public:
	Faster_Camel();

	void race(int distance);

private:
	double duration_first_rest;
	double duration_second_rest;
	double duration_next_rest;
};
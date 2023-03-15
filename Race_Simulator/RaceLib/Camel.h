#pragma once

#include "Ground_Transport.h"

class Camel : public Ground_Transport {
public:
	Camel();

	void race(int distance);

private:
	double duration_first_rest;
	double duration_next_rest;
};
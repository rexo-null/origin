#pragma once

#include "Ground_Transport.h"

class Centaur : public Ground_Transport {
public:
	Centaur();

	void race(int distance) override;

private:
	double duration_rest;
};

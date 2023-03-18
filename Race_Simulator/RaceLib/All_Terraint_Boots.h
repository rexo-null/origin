#pragma once

#include "Ground_Transport.h"

class All_Terrain_Boots : public Ground_Transport {
public:
	All_Terrain_Boots();

	void race(int distance) override;

private:
	double duration_first_rest;
	double duration_next_rest;
};
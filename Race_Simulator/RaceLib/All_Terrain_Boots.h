#pragma once

#ifdef RACELIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else 
#define LIB_API __declspec(dllimport)
#endif

#include "Ground_Transport.h"

class LIB_API All_Terrain_Boots : public Ground_Transport {
public:
	All_Terrain_Boots();

	void race(int distance) override;

private:
	double duration_first_rest;
	double duration_next_rest;
};
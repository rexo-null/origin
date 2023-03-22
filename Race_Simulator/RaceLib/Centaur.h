#pragma once

#ifdef RACELIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else 
#define LIB_API __declspec(dllimport)
#endif

#include "Ground_Transport.h"

class LIB_API Centaur : public Ground_Transport {
public:
	Centaur();

	void race(int distance) override;

private:
	double duration_rest;
};

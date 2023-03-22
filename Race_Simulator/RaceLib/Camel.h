#pragma once

#ifdef RACELIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else 
#define LIB_API __declspec(dllimport)
#endif

#include "Ground_Transport.h"

class LIB_API Camel : public Ground_Transport {
public:
	Camel();

	void race(int distance);

private:
	double duration_first_rest;
	double duration_next_rest;
};
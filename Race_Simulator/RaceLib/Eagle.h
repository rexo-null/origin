#pragma once

#ifdef RACELIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else 
#define LIB_API __declspec(dllimport)
#endif

#include "Air_Transport.h"

class LIB_API Eagle : public Air_Transport {
public:
	Eagle();

	void race(int distance) override;
};
#pragma once

#ifdef RACELIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else 
#define LIB_API __declspec(dllimport)
#endif

#include <string>

using namespace std;

class LIB_API Transport {
public:
	Transport(string name, double speed);

	string get_name();

	double get_race_time();

	virtual void race(int distance);

protected:
	string name;
	double speed;
	double race_time;
};
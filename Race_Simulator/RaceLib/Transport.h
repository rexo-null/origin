#pragma once

#include <string>

using namespace std;

class Transport {
public:
	Transport(string name, int speed);

	string get_name();

	int get_race_time();

protected:
	string name;
	int speed;
	int race_time;
};
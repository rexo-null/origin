#pragma once

#include "Transport.h"

class Air_Transport : public Transport{
public:
	Air_Transport(string name, int speed, double reduction_ratio);
	
	void race(int distance) override;

protected:
	double reduction_ratio;
};
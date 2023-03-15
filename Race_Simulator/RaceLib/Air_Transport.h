#pragma once

#include "Transport.h"

class Air_Transport : public  Transport{
public:
	Air_Transport(string name, int speed, double reduction_ration);

protected:
	double reduction_ratio;
};
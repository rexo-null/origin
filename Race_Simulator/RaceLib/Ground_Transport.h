#pragma once

#include "Transport.h"

class Ground_Transport : public Transport {
public:
	Ground_Transport(string name, int speed, int frequency_rest);

protected:
	int frequency_rest;
};
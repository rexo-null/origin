#pragma once

#include "Transport.h"

class Ground_Transport : public Transport {
public:
	Ground_Transport(string name, int speed, int frequency_rest);

	void race(int distance) override;

protected:
	int frequency_rest;
};
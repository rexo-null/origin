#pragma once

#include "Air_Transport.h"

class Broom : public Air_Transport {
public:
	Broom();

	void race(int distance) override;
};
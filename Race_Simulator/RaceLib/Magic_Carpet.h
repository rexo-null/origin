#pragma once

#include "Air_Transport.h"

class Magic_Carpet : public Air_Transport {
public:
	Magic_Carpet();

	void race(int distance) override;
};

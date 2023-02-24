#pragma once
#include "figure_exception.h"
#include <iostream>


class Figure {
public:
	Figure(int sides_count, std::string name, bool start_status);

protected:
	std::string name;
	int sides_count;

	virtual void check();
};
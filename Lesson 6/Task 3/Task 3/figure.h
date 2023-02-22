#pragma once
#include "figure_exception.h"
#include <iostream>


class Figure {
public:
	Figure(int sides_count, std::string name);

	void virtual print_myself();

protected:
	std::string get_name();
	std::string name;
	int sides_count;
};
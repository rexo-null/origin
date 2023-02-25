#include <iostream>
#include "figure_exception.h"
#include "figure.h"

Figure::Figure(int sides_count, std::string name) {
		this->name = name;
		this->sides_count = sides_count;
	}

void Figure::print_myself() {}

std::string Figure::get_name() {
		return this->name;
	}
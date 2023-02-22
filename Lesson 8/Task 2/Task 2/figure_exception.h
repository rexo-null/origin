#pragma once
#include <string>

class figure_exception {
public:
	figure_exception(std::string message);

	std::string what();

private:
	std::string error_message;
};
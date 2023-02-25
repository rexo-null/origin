#include "figure_exception.h"
#include <string>

figure_exception::figure_exception(std::string message) {
	error_message = message;
}

std::string figure_exception::what() {
	return error_message;
}

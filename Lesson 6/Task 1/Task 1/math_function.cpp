#include <cmath>
#include "math_function.h"


int addition(int first_num, int second_num) {
	return (first_num + second_num);
};

int subtraction(int first_num, int second_num) {
	return (first_num - second_num);
};

int multiplication(int first_num, int second_num) {
	return (first_num * second_num);
};

int division(int first_num, int second_num) {
	return (first_num / second_num);
};

int exponentiation(int first_num, int second_num) {
	return (std::pow(first_num, second_num));
};

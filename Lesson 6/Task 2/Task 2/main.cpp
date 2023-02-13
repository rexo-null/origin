#include "class_calc.h"
#include <iostream>


using namespace std;

int main() {
	while (true) {
		Calculator calculator;

		double num1, num2;

		cout << "Enter first number: ";
		cin >> num1;
		if (!calculator.set_num1(num1)) {
			continue;
		}

		cout << "Enter second number: ";
		cin >> num2;
		if (!calculator.set_num2(num2)) {
			continue;
		}

		calculator.cout_calc();
	}

	return 0;
}
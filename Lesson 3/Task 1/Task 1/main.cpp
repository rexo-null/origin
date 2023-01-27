#include <iostream>


using namespace std;

class Calculator {
public:
	Calculator() { //constructor
		this->num1 = 0;
		this->num2 = 0;
	}

	double num1, num2;

	bool set_num1(double num1) {
		if (num1 > 0) {
			this->num1 = num1;
			return true;
		}

		else {
			cout << "Enter number greater 0\n";
			return false;
		}
	}
	
	bool set_num2(double num2) {
		if (num2 > 0) {
			this->num2 = num2;
			return true;
		}

		else {
			cout << "Enter number greater 0\n";
			return false;
		}
	}

	void cout_calc(double num1, double num2) {
		cout << "num1 + num2 = " << add(num1, num2) << "\n";
		cout << "num1 - num2 = " << multiply(num1, num2) << "\n";
		cout << "num2 - num1 = " << subtract_1_2(num1, num2) << "\n";
		cout << "num1 * num2 = " << subtract_2_1(num1, num2) << "\n";
		cout << "num1 / num2 = " << divide_1_2(num1, num2) << "\n";
		cout << "num2 / num1 = " << divide_2_1(num1, num2) << "\n";
	}

private:
	double add(double num1, double num2) {
		double result = num1 + num2;

		return result;
	}

	double multiply(double num1, double num2) {
		double result = num1 * num2;

		return result;
	}

	double subtract_1_2(double num1, double num2) {
		double result = num2 - num1;

		return result;
	}

	double subtract_2_1(double num1, double num2) {
		double result = num1 - num2;

		return result;
	}

	double divide_1_2(double num1, double num2) {
		double result = num1 / num2;

		return result;
	}

	double divide_2_1(double num1, double num2) {
		double result = num2 / num1;

		return result;
	}
};

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

		calculator.cout_calc(num1, num2);
	}

	return 0;
}
#include <iostream>


using namespace std;

class Calculator {
public:
	Calculator() { //constructor
		this->num1 = 0;
		this->num2 = 0;
	}

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

	void cout_calc() {
		cout << "num1 + num2 = " << add() << "\n";
		cout << "num1 - num2 = " << subtract_1_2() << "\n";
		cout << "num2 - num1 = " << subtract_2_1() << "\n";
		cout << "num1 * num2 = " << multiply() << "\n";
		cout << "num1 / num2 = " << divide_1_2() << "\n";
		cout << "num2 / num1 = " << divide_2_1() << "\n";
	}

private:
	double num1, num2;

	double add() {
		double result = this->num1 + this->num2;

		return result;
	}

	double multiply() {
		double result = this->num1 * this->num2;

		return result;
	}

	double subtract_1_2() {
		double result = this->num1 - this->num2;

		return result;
	}

	double subtract_2_1() {
		double result = this->num2 - this->num1;

		return result;
	}

	double divide_1_2() {
		double result = this->num1 / this->num2;

		return result;
	}

	double divide_2_1() {
		double result = this->num2 / this->num1;

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

		calculator.cout_calc();
	}

	return 0;
}
#include <iostream>
#include "math_function.h"


using namespace std;

int main() {
	int x, y, choice;

	cout << "¬ведите первое число: ";
	cin >> x;
	cout << "¬ведите второе число: ";
	cin >> y;
	cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	cin >> choice;

	if (choice == 1) {
		cout << x << " прибавить " << y << " = " << addition(x, y);
	}

	else if (choice == 2) {
		cout << x << " отн€ть " << y << " = " << subtraction(x, y);
	}

	else if (choice == 3) {
		cout << x << " умножить на " << y << " = " << multiplication(x, y);
	}

	else if (choice == 4) {
		cout << x << " разделить на " << y << " = " << division(x, y);
	}

	else if (choice == 5) {
		cout << x << " в степени " << y << " = " << exponentiation(x, y);
	}

	else {
		cout << "ќпераци€ не найдена, завершение программы.";
	}

	return 0;
}
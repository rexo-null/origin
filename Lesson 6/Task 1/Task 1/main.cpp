#include <iostream>
#include "math_function.h"


using namespace std;

int main() {
	int x, y, choice;

	cout << "������� ������ �����: ";
	cin >> x;
	cout << "������� ������ �����: ";
	cin >> y;
	cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	cin >> choice;

	if (choice == 1) {
		cout << x << " ��������� " << y << " = " << addition(x, y);
	}

	else if (choice == 2) {
		cout << x << " ������ " << y << " = " << subtraction(x, y);
	}

	else if (choice == 3) {
		cout << x << " �������� �� " << y << " = " << multiplication(x, y);
	}

	else if (choice == 4) {
		cout << x << " ��������� �� " << y << " = " << division(x, y);
	}

	else if (choice == 5) {
		cout << x << " � ������� " << y << " = " << exponentiation(x, y);
	}

	else {
		cout << "�������� �� �������, ���������� ���������.";
	}

	return 0;
}
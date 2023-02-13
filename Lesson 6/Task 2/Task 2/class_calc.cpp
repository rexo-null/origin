#include <iostream>
#include "class_calc.h"


using namespace std;

Calculator::Calculator() { //constructor
	this->num1 = 0;
	this->num2 = 0;
}

bool Calculator::set_num1(double num1) {
	if (num1 > 0) {
		this->num1 = num1;
		return true;
	}

	else {
		cout << "Enter number greater 0\n";
		return false;
	}
}

bool Calculator::set_num2(double num2) {
	if (num2 > 0) {
		this->num2 = num2;
		return true;
	}

	else {
		cout << "Enter number greater 0\n";
		return false;
	}
}

void Calculator::cout_calc() {
	cout << "num1 + num2 = " << add() << "\n";
	cout << "num1 - num2 = " << subtract_1_2() << "\n";
	cout << "num2 - num1 = " << subtract_2_1() << "\n";
	cout << "num1 * num2 = " << multiply() << "\n";
	cout << "num1 / num2 = " << divide_1_2() << "\n";
	cout << "num2 / num1 = " << divide_2_1() << "\n";
}

double Calculator::add() {
	double result = this->num1 + this->num2;

	return result;
}

double Calculator::multiply() {
	double result = this->num1 * this->num2;

	return result;
}

double Calculator::subtract_1_2() {
	double result = this->num1 - this->num2;

	return result;
}

double Calculator::subtract_2_1() {
	double result = this->num2 - this->num1;

	return result;
}

double Calculator::divide_1_2() {
	double result = this->num1 / this->num2;

	return result;
}

double Calculator::divide_2_1() {
	double result = this->num2 / this->num1;

	return result;
}

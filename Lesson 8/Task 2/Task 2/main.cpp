#include <iostream>
#include "math_figure.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	Figure figure(0, "������", true);
	Triangle triangle(10, 20, 30, 60, 60, 60, "�����������", true);
	Right_Triangle right_triangle(10, 20, 30, 45, 45, 90, "������������� �����������");
	Isosceles_Triangle isosceles_triangle(10, 20, 10, 50, 60, 50, "�������������� �����������");
	Equilateral_Triangle equilateral_triangle(30, 60, "�������������� �����������");
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "��������������", true);
	Rectangle rectangle(10, 20, 10, 20, 90, "�������������");
	Square square(20, 90, "�������");
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40, "��������������");
	Rhomb rhomb(30, 30, 40, 30, 40, "����");

	return 0;
}
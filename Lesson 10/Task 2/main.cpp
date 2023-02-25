#include <iostream>
#include "math_figure.h"

using namespace std;

void print_info(Figure& figure) {
	figure.print_myself();
}

int main() {
	Figure figure(0, "������");
	Triangle triangle(10, 20, 30, 50, 60, 70, "�����������");
	Right_Triangle right_triangle(10, 20, 30, 50, 60, "������������� �����������");
	Isosceles_Triangle isosceles_triangle(10, 20, 10, 50, 60, 50, "�������������� �����������");
	Equilateral_Triangle equilateral_triangle(30, 60, "�������������� �����������");
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "��������������");
	Rectangle rectangle(10, 20, 10, 20, 90, "�������������");
	Square square(20, 90, "�������");
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40, "��������������");
	Rhomb rhomb(30, 30, 40, 30, 40, "����");

	print_info(triangle);
	print_info(right_triangle);
	print_info(isosceles_triangle);
	print_info(equilateral_triangle);
	print_info(quadrangle);
	print_info(rectangle);
	print_info(square);
	print_info(parallelogram);
	print_info(rhomb);

	return 0;
}
#include <iostream>
#include "math_figure.h"

using namespace std;

void print_info(Figure& figure) {
	figure.print_myself();
}

int main() {
	Figure figure(0, "Фигура");
	Triangle triangle(10, 20, 30, 50, 60, 70, "Треугольник");
	Right_Triangle right_triangle(10, 20, 30, 50, 60, "Прямоугольный треугольник");
	Isosceles_Triangle isosceles_triangle(10, 20, 10, 50, 60, 50, "Равнобедренный треугольник");
	Equilateral_Triangle equilateral_triangle(30, 60, "Равносторонний треугольник");
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "Четырёхугольник");
	Rectangle rectangle(10, 20, 10, 20, 90, "Прямоугольник");
	Square square(20, 90, "Квадрат");
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40, "Параллелограмм");
	Rhomb rhomb(30, 30, 40, 30, 40, "Ромб");

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
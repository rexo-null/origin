#include <iostream>
#include "math_figure.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	Figure figure(0, "Фигура", true);
	Triangle triangle(10, 20, 30, 60, 60, 60, "Треугольник", true);
	Right_Triangle right_triangle(10, 20, 30, 45, 45, 90, "Прямоугольный треугольник");
	Isosceles_Triangle isosceles_triangle(10, 20, 10, 50, 60, 50, "Равнобедренный треугольник");
	Equilateral_Triangle equilateral_triangle(30, 60, "Равносторонний треугольник");
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "Четырёхугольник", true);
	Rectangle rectangle(10, 20, 10, 20, 90, "Прямоугольник");
	Square square(20, 90, "Квадрат");
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40, "Параллелограмм");
	Rhomb rhomb(30, 30, 40, 30, 40, "Ромб");

	return 0;
}
#include <iostream>
#include <vector>


using namespace std;

class Figure {
public: Figure() {
	Figure() {
		this->name = name;
	}
}

private: 

};

class Triangle {
public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, string name) {
		this->name = name;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}

private:
	string name;
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
};

class Right_Triangle :public Triangle{
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name) {}
};

class Isosceles_Triangle :public Triangle {
public:
	Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name) {}
};

class Equilateral_Triangle :public Triangle {
public:
	Equilateral_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name) {}
};

class Quadrangle {
public:
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) {
		this->name = name;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->side_d = side_d;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
		this->angle_D = angle_D;
	}

protected:
	string name;
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;
};

class Rectangle :public Quadrangle{
public:
	Rectangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) :Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name) {}
};

class Square :public Quadrangle {
public:
	Square(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) : Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name) {}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) :Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name) {}
};

class Rhomb :public Quadrangle {
public:
	Rhomb(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) :Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name) {}
};

void print_info() {
	
}

int main() {
	Triangle triangle(10, 20, 30, 50, 60, 70, "Треугольник");
	Right_Triangle right_triangle(10, 20, 30, 50, 60, 90, "Прямоугольный треугольник");
	Isosceles_Triangle isosceles_triangle(10, 20, 10, 50, 60, 50, "Равнобедренный треугольник");
	Equilateral_Triangle equilateral_triangle(30, 30, 30, 60, 60, 60, "Равносторонний треугольник");
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "Четырёхугольник");
	Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90, "Прямоугольник");
	Square square(20, 20, 20, 20, 90, 90, 90, 90, "Квадрат");
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40, "Параллелограмм");
	Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40, "Ромб");

	return 0;
}
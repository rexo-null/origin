#include <iostream>
#include <vector>


using namespace std;

class Triangle {
public:
	Triangle() {
		this->name = "Треугольник";
		this->side_a = 10;
		this->side_b = 20;
		this->side_c = 30;
		this->angle_A = 50;
		this->angle_B = 60;
		this->angle_C = 70;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << "\n";
	}

protected:
	string name;
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
};

class Right_Triangle :public Triangle{
public:
	Right_Triangle() {
		this->name = "Прямоугольный Треугольник";
		this->side_a = 10;
		this->side_b = 20;
		this->side_c = 30;
		this->angle_A = 50;
		this->angle_B = 60;
		this->angle_C = 90;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << "\n";
	}
};

class Isosceles_Triangle :public Triangle {
public:
	Isosceles_Triangle() {
		this->name = "Равнобедренный треугольник";
		this->side_a = 10;
		this->side_b = 20;
		this->side_c = 10;
		this->angle_A = 50;
		this->angle_B = 60;
		this->angle_C = 50;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << "\n";
	}
};

class Equilateral_Triangle :public Triangle {
public:
	Equilateral_Triangle() {
		this->name = "Равносторонний треугольник";
		this->side_a = 30;
		this->side_b = 30;
		this->side_c = 30;
		this->angle_A = 60;
		this->angle_B = 60;
		this->angle_C = 60;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << "\n";
	}
};

class Quadrangle {
public:
	Quadrangle() {
		this->name = "Четырёхугольник";
		this->side_a = 10;
		this->side_b = 20;
		this->side_c = 30;
		this->side_d = 40;
		this->angle_A = 50;
		this->angle_B = 60;
		this->angle_C = 70;
		this->angle_D = 80;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << " " << this->side_d << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << " " << this->angle_D << "\n";
	}

protected:
	string name;
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;
};

class Rectangle :public Quadrangle{
public:
	Rectangle() {
		this->name = "Прямоугольник";
		this->side_a = 10;
		this->side_b = 20;
		this->side_c = 10;
		this->side_d = 20;
		this->angle_A = 90;
		this->angle_B = 90;
		this->angle_C = 90;
		this->angle_D = 90;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << " " << this->side_d << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << " " << this->angle_D << "\n";
	}
};

class Square :public Quadrangle {
public:
	Square() {
		this->name = "Квадрат";
		this->side_a = 20;
		this->side_b = 20;
		this->side_c = 20;
		this->side_d = 20;
		this->angle_A = 90;
		this->angle_B = 90;
		this->angle_C = 90;
		this->angle_D = 90;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << " " << this->side_d << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << " " << this->angle_D << "\n";
	}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram() {
		this->name = "Параллелограмм";
		this->side_a = 20;
		this->side_b = 20;
		this->side_c = 20;
		this->side_d = 20;
		this->angle_A = 30;
		this->angle_B = 40;
		this->angle_C = 30;
		this->angle_D = 40;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << " " << this->side_d << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << " " << this->angle_D << "\n";
	}
};

class Rhomb :public Quadrangle {
public:
	Rhomb() {
		this->name = "Ромб";
		this->side_a = 30;
		this->side_b = 30;
		this->side_c = 30;
		this->side_d = 30;
		this->angle_A = 30;
		this->angle_B = 40;
		this->angle_C = 30;
		this->angle_D = 40;
	}

	void cout_figure_info() {
		cout << this->name + ":\n";
		cout << "Стороны: a=" << this->side_a << " " << this->side_b << " " << this->side_c << " " << this->side_d << "\n";
		cout << "Углы: A=" << this->angle_A << " " << this->angle_B << " " << this->angle_C << " " << this->angle_D << "\n";
	}
};

int main() {
	Triangle triangle;
	Right_Triangle right_triangle;
	Isosceles_Triangle isosceles_triangle;
	Equilateral_Triangle equilateral_triangle;
	Quadrangle quadrangle;
	Rectangle rectangle;
	Square square;
	Parallelogram parallelogram;
	Rhomb rhomb;

	triangle.cout_figure_info();
	right_triangle.cout_figure_info();
	isosceles_triangle.cout_figure_info();
	equilateral_triangle.cout_figure_info();
	quadrangle.cout_figure_info();
	rectangle.cout_figure_info();
	square.cout_figure_info();
	parallelogram.cout_figure_info();
	rhomb.cout_figure_info();

	return 0;
}
#include <iostream>
#include <vector>


using namespace std;

class Figure {
public:
	Figure(int sides_count, string name) {
		this->name = name;
		this->sides_count = sides_count;
	}

	void virtual print_myself() {}

protected:
	string get_name() {
		return this->name;
	}

private:
	string name;
	int sides_count;
};

class Triangle : public Figure {
public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, string name) :Figure(3, name) {
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}

	void print_myself() override {
		cout << get_name() << ":\n";
		cout << "�������: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << "\n";
		cout << "����: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << "\n\n";
	}

private:
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
};

class Right_Triangle :public Triangle {
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, 90, name) {}
};

class Isosceles_Triangle :public Triangle {
public:
	Isosceles_Triangle(int side_a, int side_b, int angle_A, int angle_B, string name) :Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A, name) {}
};

class Equilateral_Triangle :public Triangle {
public:
	Equilateral_Triangle(int side, string name) :Triangle(side, side, side, 60, 60, 60, name) {}
};

class Quadrangle :public Figure {
public:
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) :Figure(4, name) {
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->side_d = side_d;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
		this->angle_D = angle_D;
	}

	void print_myself() override {
		cout << get_name() << ":\n";
		cout << "�������: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << "\n";
		cout << "����: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->side_d << "\n\n";
	}

protected:
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;
};

class Rectangle :public Quadrangle {
public:
	Rectangle(int side_a, int side_b, string name) :Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90, name) {}
};

class Square :public Quadrangle {
public:
	Square(int side, string name) : Quadrangle(side, side, side, side, 90, 90, 90, 90, name) {}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B, string name) :Quadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B, name) {}
};

class Rhomb :public Quadrangle {
public:
	Rhomb(int side, int angle_A, int angle_B, string name) :Quadrangle(side, side, side, side, angle_A, angle_B, angle_A, angle_B, name) {}
};

void print_info(Figure& figure) {
	figure.print_myself();
}

int main() {
	Figure figure(0, "������");
	Triangle triangle(10, 20, 30, 50, 60, 70, "�����������");
	Right_Triangle right_triangle(10, 20, 30, 50, 60, "������������� �����������");
	Isosceles_Triangle isosceles_triangle(10, 20, 50, 60, "�������������� �����������");
	Equilateral_Triangle equilateral_triangle(30, "�������������� �����������");
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80, "��������������");
	Rectangle rectangle(10, 20, "�������������");
	Square square(20, "�������");
	Parallelogram parallelogram(20, 30, 30, 40, "��������������");
	Rhomb rhomb(30, 30, 40, "����");

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
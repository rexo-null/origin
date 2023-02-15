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
	string name;
	int sides_count;

	virtual bool check() {
		if (this->sides_count == 0) {
			return true;
		}

		else {
			return false;
		}
	}

	string get_name() {
		return this->name;
	}
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
		if (check()) {
			cout << "Правильная\n";
		}
		else {
			cout << "Неправильная\n";
		}
		cout << "Количество сторон: " << this->sides_count << "\n";
		cout << "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << "\n";
		cout << "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << "\n\n";
	}

protected:
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;

	bool check() override {
		if ((this->angle_A + this->angle_B + this->angle_C) == 180 && this->sides_count == 3) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Right_Triangle :public Triangle {
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, 90, name) {}

protected:
	bool check() override{
		if (this->angle_C == 90 && this->sides_count == 3) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Isosceles_Triangle :public Triangle {
public:
	Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C, string name) :Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C, name) {}

protected:
	bool check() override {
		if (this->side_a == this->side_c && this->angle_A == this->angle_C && this->sides_count == 3) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Equilateral_Triangle :public Triangle {
public:
	Equilateral_Triangle(int side, int angle, string name) :Triangle(side, side, side, angle, angle, angle, name) {}

protected:
	bool check() override {
		if (((this->side_a & this->side_b & this->side_c) == this->side_a) && ((this->angle_A & this->angle_B & this->angle_C) == 60) && this->sides_count == 3) {
			return true;
		}

		else {
			return false;
		}
	}
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
		if (check()) {
			cout << "Правильная\n";
		}
		else {
			cout << "Неправильная\n";
		}
		cout << "Количество сторон: " << this->sides_count << "\n";
		cout << "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << "\n";
		cout << "Углы: A=" << this->angle_A << " B=" << this->angle_B << " C=" << this->angle_C << " D=" << this->side_d << "\n\n";
	}

protected:
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;

	bool check() override {
		if ((this->angle_A + this->angle_B + this->angle_C + this->angle_D) == 360 && this->sides_count == 4) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Rectangle :public Quadrangle {
public:
	Rectangle(int side_a, int side_b, int side_c, int side_d, int angle, string name) :Quadrangle(side_a, side_b, side_c, side_d, angle, angle, angle, angle, name) {}

protected:
	bool check() override {
		if (this->side_a == this->side_c && this->side_b == this->side_d && ((this->angle_A & this->angle_B & this->angle_C & this->angle_D) == 90) && this->sides_count == 4) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Square :public Quadrangle {
public:
	Square(int side, int angle, string name) : Quadrangle(side, side, side, side, angle, angle, angle, angle, name) {}

protected:
	bool check() override {
		if ((((this->side_a + this->side_b + this->side_c + this->side_d) / 4) == this->side_a) && this->sides_count == 4) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D, string name) :Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D, name) {}

protected:
	bool check() override {
		if ((((this->side_a + this->side_b + this->side_c + this->side_d) / 4) == this->side_a) && this->sides_count == 4) {
			return true;
		}

		else {
			return false;
		}
	}
};

class Rhomb :public Quadrangle {
public:
	Rhomb(int side, int angle_A, int angle_B, int angle_C, int angle_D, string name) :Quadrangle(side, side, side, side, angle_A, angle_B, angle_C, angle_D, name) {}
};

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
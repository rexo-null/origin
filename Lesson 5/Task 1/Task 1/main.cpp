#include <iostream>


using namespace std;

class Figure {
public:
	Figure(int sides_count, string name) {
		this->sides_count = sides_count;
		this->name = name;
	}

	int get_sides_count() {
		return this->sides_count;
	}

	string get_name() {
		return this->name;
	}
private:
	string name;
	int sides_count;
};

class Triangle : public Figure {
public:
	Triangle(int sides_count, string name) :Figure(sides_count, name) {}
};

class Quadrangle : public Figure {
public:
	Quadrangle(int sides_count, string name) :Figure(sides_count, name) {}
};

int main() {
	Figure* figure = &Figure(0, "Фигура");
	Figure* triangle = &Figure(3, "Треугольник");
	Figure* quadrangle = &Figure(4, "Четырёхугольник");

	cout << "Количество сторон:\n";
	cout << figure->get_name() << ": " << figure->get_sides_count() << "\n";
	cout << triangle->get_name() << ": " << triangle->get_sides_count() << "\n";
	cout << quadrangle->get_name() << ": " << quadrangle->get_sides_count() << "\n";

	return 0;
}
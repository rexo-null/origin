#include <iostream>


using namespace std;

class Figure {
public:
	Figure() {
		this->sides_count = 0;
		name = "������";
	}

	int get_sides_count() {
		return this->sides_count;
	}

	string get_name() {
		return this->name;
	}
protected:
	string name;
	int sides_count;
};

class Triangle : public Figure {
public:
	Triangle() {
		this->sides_count = 3;
		this->name = "�����������";
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() {
		this->sides_count = 4;
		this->name = "��������������";
	}
};

int main() {
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;

	cout << "���������� ������:\n";
	cout << figure.get_name() << ": " << figure.get_sides_count() << "\n";
	cout << triangle.get_name() << ": " << triangle.get_sides_count() << "\n";
	cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << "\n";

	return 0;
}
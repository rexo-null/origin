#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	double division() {
		return (static_cast<double>(numerator_) / static_cast<double>(denominator_));
	}

	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator == (Fraction& fraction) {
		return (division() == fraction.division());
	}
	bool operator != (Fraction& fraction) {
		return !(*this == fraction);
	}
	bool operator < (Fraction& fraction) {
		return (division() < fraction.division());
	}
	bool operator > (Fraction& fraction) {
		return (division() > fraction.division());
	}
	bool operator <= (Fraction& fraction) {
		return (*this < fraction || *this == fraction);
	}
	bool operator >= (Fraction& fraction) {
		return (*this > fraction || *this == fraction);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
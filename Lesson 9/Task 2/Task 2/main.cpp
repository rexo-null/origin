#include <iostream>
#include <string>

using namespace std;

class Fraction {
private:
	int numerator_;
	int denominator_;

public:
	double division() {
		return (static_cast<double>(numerator_) / static_cast<double>(denominator_));
	}

	Fraction(int numerator, int denominator) {
		numerator_ = numerator;
		denominator_ = denominator;
	}

	string operator + (Fraction& fraction) {
		return (to_string((numerator_ * fraction.denominator_) + (fraction.numerator_ * denominator_)) + "/" + to_string(denominator_ * fraction.denominator_));
	}

	string operator - (Fraction& fraction) {
		return (to_string((numerator_ * fraction.denominator_) - (fraction.numerator_ * denominator_)) + "/" + to_string(denominator_ * fraction.denominator_));
	}

	string operator * (Fraction& fraction) {
		return (to_string(numerator_ * fraction.numerator_) + "/" + to_string(denominator_ * fraction.denominator_));
	}

	string operator / (Fraction& fraction) {
		return (to_string(numerator_ * fraction.denominator_) + "/" + to_string(denominator_ * fraction.numerator_));
	}

	Fraction& operator ++ () {
		numerator_ = ((static_cast<double>(numerator_) / static_cast<double>(denominator_)) + 1) * denominator_;

		return *this;
	}

	Fraction operator ++ (int) {
		return ++(*this);
	}

	Fraction& operator -- () {
		numerator_ = ((static_cast<double>(numerator_) / static_cast<double>(denominator_)) - 1) * denominator_;

		return *this;
	}

	Fraction& operator -- (int) {
		return --(*this);
	}

};

int main() {
	int first_frac_num, first_frac_den;
	int second_frac_num, second_frac_den;

	cout << "¬ведите числитель дроби 1: ";
	cin >> first_frac_num;
	cout << "¬ведите знаменатель дроби 1: ";
	cin >> first_frac_den;
	cout << "¬ведите числитель дроби 2: ";
	cin >> second_frac_num;
	cout << "¬ведите знаменатель дроби 2: ";
	cin >> second_frac_den;

	Fraction frac_one(first_frac_num,first_frac_den);
	Fraction frac_two(second_frac_num, second_frac_den);

	cout << first_frac_num << "/" << first_frac_den << " + " << second_frac_num << "/" << second_frac_den << " = " << frac_one + frac_two << "\n";
	cout << first_frac_num << "/" << first_frac_den << " - " << second_frac_num << "/" << second_frac_den << " = " << frac_one - frac_two << "\n";
	cout << first_frac_num << "/" << first_frac_den << " * " << second_frac_num << "/" << second_frac_den << " = " << frac_one * frac_two << "\n";
	cout << first_frac_num << "/" << first_frac_den << " / " << second_frac_num << "/" << second_frac_den << " = " << frac_one / frac_two << "\n";
	cout << "++" << first_frac_num << "/" << first_frac_den << " * " << second_frac_num << "/" << second_frac_den << " = " << ++frac_one * frac_two << "\n";
	cout << "«начение дроби 1 = " << ++frac_one * frac_two << "\n";
	cout << ++frac_one * frac_two << "-- * " << second_frac_num << "/" << second_frac_den << " = " << (++frac_one)-- * frac_two << "\n";
	cout << "«начение дроби 1 = " << (++frac_one)-- * frac_two << "\n";

	return 0;
}
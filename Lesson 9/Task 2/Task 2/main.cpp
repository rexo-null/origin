#include <iostream>
#include <string>

using namespace std;

class Fraction {
private:
	float numerator_;
	float denominator_;

	float division(Fraction& fraction) {
		return (fraction.numerator_ / fraction.denominator_);
	}

public:
	Fraction(float numerator, float denominator) {
		this->numerator_ = numerator;
		this->denominator_ = denominator;
	}

	string print() {
		return (to_string(this->numerator_) + "/" + to_string(this->denominator_));
	}

	Fraction& operator + (Fraction& fraction) {
		Fraction temp = *this;

		temp.numerator_ = (temp.numerator_ * fraction.denominator_) + (fraction.numerator_ * temp.denominator_);
		temp.denominator_ = temp.denominator_ * fraction.denominator_;

		return temp;
	}

	Fraction& operator - (Fraction& fraction) {
		Fraction temp = *this;

		temp.numerator_ = (temp.numerator_ * fraction.denominator_) - (fraction.numerator_ * temp.denominator_);
		temp.denominator_ = temp.denominator_ * fraction.denominator_;
		
		return temp;
	}

	Fraction& operator * (Fraction& fraction) {
		Fraction temp = *this;

		temp.numerator_ = (temp.numerator_ * fraction.numerator_);
		temp.denominator_ = (temp.denominator_ * fraction.denominator_);

		return temp;
	}

	Fraction& operator / (Fraction& fraction) {
		Fraction temp = *this;

		temp.numerator_ = (temp.numerator_ * fraction.denominator_);
		temp.denominator_ = (temp.denominator_ * fraction.numerator_);

		return temp;
	}

	Fraction& operator ++ () {
		this->numerator_ = (division(*this) + 1) * this->denominator_;

		return *this;
	}

	Fraction operator ++ (int) {
		Fraction temp = *this;
		++(*this);

		return temp;
	}

	Fraction& operator -- () {
		this->numerator_ = (division(*this) - 1) * this->denominator_;

		return *this;
	}

	Fraction operator -- (int) {
		Fraction temp = *this;
		--(*this);
		
		return temp;
	}
};

int main() {
	int first_frac_num, first_frac_den;
	int second_frac_num, second_frac_den;

	/*cout << "¬ведите числитель дроби 1: ";
	cin >> first_frac_num;
	cout << "¬ведите знаменатель дроби 1: ";
	cin >> first_frac_den;
	cout << "¬ведите числитель дроби 2: ";
	cin >> second_frac_num;
	cout << "¬ведите знаменатель дроби 2: ";
	cin >> second_frac_den;*/

	Fraction frac_one(3, 4);
	Fraction frac_two(4, 5);

	cout << frac_one.print() << " + " << frac_two.print() << " = " << (frac_one + frac_two).print() << "\n";

	cout << frac_one.print() << " - " << frac_two.print() << " = " << (frac_one - frac_two).print() << "\n";

	cout << frac_one.print() << " * " << frac_two.print() << " = " << (frac_one * frac_two).print() << "\n";
	
	cout << frac_one.print() << " / " << frac_two.print() << " = " << (frac_one / frac_two).print() << "\n";

	cout << "++ " << frac_one.print() << " * " << frac_two.print() << " = ";
	++frac_one * frac_two;
	cout << frac_one.print() << "\n";

	cout << "«начение дроби 1 = " << frac_one.print() << "\n";

	cout << frac_one.print() << "--" << " * " << frac_two.print() << " = ";
	cout << (frac_one-- * frac_two).print() << "\n";

	cout << "«начение дроби 1 = " << frac_one.print() << "\n";

	return 0;
}
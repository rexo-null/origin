#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

class Adress {
public:
	Adress() {
		this->city_name = "";
		this->street_name = "";
		this->house_number = 0;
		this->flat_number = 0;
	}

	void set_adress(ifstream& adress_in) {
		adress_in >> this->city_name;
		adress_in >> this->street_name;
		adress_in >> this->house_number;
		adress_in >> this->flat_number;
	}

	string get_formated_adress() {
		string formated_adress = (this->city_name + ", " + this->street_name + ", " + to_string(this->house_number) + ", " + to_string(this->flat_number) + "\n");

		return formated_adress;
	}

private:
	string city_name;
	string street_name;
	int house_number;
	int flat_number;
};

int main() {
	ifstream fin;
	ofstream fon;

	fin.open("in.txt");

	if (fin.is_open()) {
		int count;

		fin >> count;


		vector<Adress> all_formated_adress(count);

		for (int i = 0; i < count; i++) {
			Adress adress;
			adress.set_adress(fin);
			all_formated_adress[i] = adress;
		}

		fon.open("out.txt");
		
		if (fon.is_open()) {
			fon << count << "\n";

			for (int i = (count - 1); i >= 0; i--) {
				fon << all_formated_adress[i].get_formated_adress();
			}

			fon.close();
		}

		else {
			cout << "File for output is not open";
		}

		fin.close();
	}

	else {
		cout << "File for input is not open";
	}

	return 0;
}
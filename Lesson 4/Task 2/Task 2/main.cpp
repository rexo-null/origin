#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

class Adress {
public:
	void formated_adress_out(ifstream& adress_in, ofstream& adress_out) {
		string intermediate_string;
		int count_adress;

		adress_in >> count_adress;
		adress_out << count_adress << "\n";

		vector<string> adress(count_adress);

		for (int i = 0; i < count_adress; i++) {
			adress.insert(adress.begin(), "");
			for (int j = 0; j < 3; j++) {
				adress_in >> intermediate_string;
				adress[0] += intermediate_string + ", ";
			}
			adress_in >> intermediate_string;
			adress[0] += intermediate_string;
		}

		for (int i = 0; i < count_adress; i++) {
			for (int j = 0; j < count_adress; j++) {
				if (static_cast<char>(adress[i][0]) < static_cast<char>(adress[j][0])) {
					string intermediate_string = adress[j];
					adress[j] = adress[i];
					adress[i] = intermediate_string;
				}
			}
		}

		for (int i = 0; i < count_adress; i++) {
			adress_out << adress[i] << "\n";
		}

	}
	
};

int main() {
	ifstream fin;
	ofstream fon;
	Adress adress;

	fin.open("in.txt");

	if (fin.is_open()) {
		fon.open("out.txt");

		if (fon.is_open()) {
			adress.formated_adress_out(fin, fon);
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
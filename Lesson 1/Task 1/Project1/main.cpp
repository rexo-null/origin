#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;

int main() {
	ifstream fin;
	ofstream fon;

	vector<int> first_array;
	vector<int> second_array;

	int first_array_size, second_array_size;

	fin.open("in.txt");

	cout << "Attempt to open an input file...\n";
	Sleep(3000);
	cout << "File opened successfully.\n\n";
	for (int i = 0; i < 3; i++) {
		cout << "We are performing manipulations, please wait \\" << "\r";
		Sleep(500);
		cout << "We are performing manipulations, please wait |" << "\r";
		Sleep(500);
		cout << "We are performing manipulations, please wait /" << "\r";
		Sleep(500);
	}

	cout << "We are performing manipulations, please wait \"DONE!\"";

	cout << "\n\nThe manipulations were carried out successfully! Let's move on to the next stage.\n\n";

	if (fin.is_open()) {
		fin >> first_array_size;

		for (int i = 0; i < first_array_size; i++) {
			int j;
			fin >> j;
			first_array.push_back(j);
		}

		fin >> second_array_size;

		for (int i = 0; i < second_array_size; i++) {
			int j;
			fin >> j;
			second_array.push_back(j);
		}

		fin.close();
	}

	else {
		cout << "The file was not opened. It may not exist or it may have been damaged.";
	}

	second_array.insert(second_array.begin(), second_array[second_array_size - 1]);
	first_array.push_back(first_array[0]);
	first_array.erase(first_array.begin());

	fon.open("out.txt");

	cout << "Attempt to open an output file...\n";
	Sleep(3000);
	cout << "File opened successfully.\n\n";

	for (int i = 0; i < 3; i++) {
		cout << "We are performing manipulations, please wait \\" << "\r";
		Sleep(500);
		cout << "We are performing manipulations, please wait |" << "\r";
		Sleep(500);
		cout << "We are performing manipulations, please wait /" << "\r";
		Sleep(500);
	}

	cout << "We are performing manipulations, please wait \"DONE!\"";

	cout << "\n\nAll manipulations have been completed successfully! Thank you for using our software that does \"nothing\" :).";

	if (fon.is_open()) {
		fon << second_array_size << "\n";

		for (int i = 0; i < second_array_size; i++) {
			fon << second_array[i] << " ";
		}

		fon << "\n" << first_array_size << "\n";

		for (int i = 0; i < first_array_size; i++) {
			fon << first_array[i] << " ";
		}

		fon.close();
	}

	else {
		cout << "The file was not opened. It may not exist or it may have been damaged.";
	}

	return 0;
}
#include <iostream>
#include <string>


using namespace std;

class Counter {
public:
	Counter(){
		this->count = 1;
	}

	void set_count() {
		cout << "Enter counter initial value: ";
		cin >> this->count;
	}

	void count_up() {
		this->count++;
	}

	void count_down() {
		this->count--;
	}

	void count_cout() {
		cout << this->count << "\n";
	}

private:
	int count;
};

int main() {
	Counter counter;

	string choice;
	
	while (true) {
		cout << "Do you want to specify the initial value of the counter? (y/n): ";
		cin >> choice;

		if (choice == "y" || choice == "n") {
			counter.set_count();
			break;
		}

		else { 
			cout << "Enter 'y' or 'n'\n";
			continue;
		}
	}

	while (true) {
		cout << "Enter command ('+' - boost counter, '-' - lower counter, '=' - display counter or 'q' for quit): ";
		cin >> choice;
		if (choice == "+" || choice == "-" || choice == "=" || choice == "q") {
			if (choice == "+") { counter.count_up(); }
			else if (choice == "-") { counter.count_down(); }
			else if (choice == "=") { counter.count_cout(); }
			else if (choice == "q") { break; }
		}
		else {
			cout << "Invalid command, try again!\n";
			continue;
		}
	}

	return 0;
}
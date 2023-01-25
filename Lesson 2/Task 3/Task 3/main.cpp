#include <iostream>
#include <string>


using namespace std;

struct adress_info {
	string city_name;
	string street_name;
	int house_number;
	int flat_number;
	int index;
};

void struct_cout(struct adress_info& struct_cout) {
	cout << "City: " << struct_cout.city_name << "\n";
	cout << "Street: " << struct_cout.street_name << "\n";
	cout << "House number: " << struct_cout.house_number << "\n";
	cout << "Flat number: " << struct_cout.flat_number << "\n";
	cout << "Index: " << struct_cout.index << "\n\n";
}

int main() {
	adress_info Moscow{ "Moscow", "Arbath", 12, 8, 123456 };
	adress_info Izhevsk{ "Izhevsk","Pushkina", 59, 143, 953769 };

	struct_cout(Moscow);
	struct_cout(Izhevsk);

	return 0;
}
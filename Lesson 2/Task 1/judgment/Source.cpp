#include <iostream>
#include <windows.h>

using namespace std;

enum month {
	January = 1,
	February = 2,
	Marth = 3,
	Apryl = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

int main() {
	while (true) {
		int month_number;

		cout << "Enter month number: ";
		cin >> month_number;

		static_cast<month>(month_number);

		switch (month_number) {
		case 0:
			cout << "See you soon! :)";
			goto exit;
			break;
		case month::January:
			cout << "January\n";
			break;
		case month::February:
			cout << "February\n";
			break;
		case month::Marth:
			cout << "Marth\n";
			break;
		case month::Apryl:
			cout << "Apryl\n";
			break;
		case month::May:
			cout << "May\n";
			break;
		case month::June:
			cout << "June\n";
			break;
		case month::July:
			cout << "July\n";
			break;
		case month::August:
			cout << "August\n";
			break;
		case month::September:
			cout << "September\n";
			break;
		case month::October:
			cout << "October\n";
			break;
		case month::November:
			cout << "November\n";
			break;
		case month::December:
			cout << "December\n";
			break;
		default:
			cout << "According to the Gregorian calendar, there are only 12 months.\n";
			for (int i = 0; i < 5; i++) {
				cout << "Study the laws of quantum physics \\ \r";
				Sleep(500);
				cout << "Study the laws of quantum physics | \r";
				Sleep(500);
				cout << "Study the laws of quantum physics / \r";
				Sleep(500);
			}
			cout << "\n";
			for (int i = 0; i < 5; i++) {
				cout << "Moving in time to October 4, 1582 years \\ \r";
				Sleep(500);
				cout << "Moving in time to October 4, 1582 years | \r";
				Sleep(500);
				cout << "Moving in time to October 4, 1582 years / \r";
				Sleep(500);
			}
			cout << "\n";
			for (int i = 0; i < 5; i++) {
				cout << "Trying to rewrite the history of the creation of the Gregorian calendar \\ \r";
				Sleep(500);
				cout << "Trying to rewrite the history of the creation of the Gregorian calendar | \r";
				Sleep(500);
				cout << "Trying to rewrite the history of the creation of the Gregorian calendar / \r";
				Sleep(500);
			}
			cout << "\n";
			cout << "Oops! We tried, but it didn't work out. Let's still try to do 12 months?\n";
		}

	}

	exit: 
		return 0;
}
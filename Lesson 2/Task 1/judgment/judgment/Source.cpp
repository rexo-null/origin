#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	while (true) {
		int month_number;

		cout << "Enter month number: ";
		cin >> month_number;

		switch (month_number) {
		case 0:
			cout << "See you soon! :)";
			goto exit;
			break;
		case 1:
			cout << "January\n";
			break;
		case 2:
			cout << "February\n";
			break;
		case 3:
			cout << "Marth\n";
			break;
		case 4:
			cout << "Apryl\n";
			break;
		case 5:
			cout << "May\n";
			break;
		case 6:
			cout << "June\n";
			break;
		case 7:
			cout << "July\n";
			break;
		case 8:
			cout << "August\n";
			break;
		case 9:
			cout << "September\n";
			break;
		case 10:
			cout << "October\n";
			break;
		case 11:
			cout << "November\n";
			break;
		case 12:
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
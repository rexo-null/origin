#include <iostream>
#include <string>

using namespace std;

int function(string str, int forbiden_lenght) {
	if (str.length() == forbiden_lenght) {
		throw exception("Вы ввели слово запретной длины!");
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	string str;
	int forbiden_lenght;

	cout << "Введите запретную длину: ";
	cin >> forbiden_lenght;

	while (true) {
		try {
			cout << "Введите слово: ";
			cin >> str;
			cout << "Длина слова " << str << " равна: " << function(str, forbiden_lenght) << "\n";
		}
		catch (exception& ex) {
			cout << ex.what();
			break;
		}
	}

	return 0;
}
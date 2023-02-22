#include <iostream>
#include <string>

using namespace std;

class bad_lenght{
public:
	bad_lenght(const char* message) {
		this->error_message = message;
	}

	const char* what() { return this->error_message; }

private:
	const char* error_message;
};

int function(string str, int forbiden_lenght) { return str.length() == forbiden_lenght ? throw bad_lenght("Вы ввели слово запретной длины!") : str.length(); }

int main() {
	setlocale(LC_ALL, "ru");

	string str;
	int forbiden_lenght;

	cout << "Введите запретную длину: ";
	cin >> forbiden_lenght;

	while (true) {
		cout << "Введите слово: ";
		cin >> str;
		try {
			cout << "Длина слова " << str << " равна: " << function(str, forbiden_lenght) << "\n";
		}
		catch (bad_lenght& ex) {
			cout << ex.what();
			break;
		}
	}

	return 0;
}
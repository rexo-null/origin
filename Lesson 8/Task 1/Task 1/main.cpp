#include <iostream>
#include <string>

using namespace std;

int function(string str, int forbiden_lenght) {
	if (str.length() == forbiden_lenght) {
		throw exception("�� ����� ����� ��������� �����!");
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	string str;
	int forbiden_lenght;

	cout << "������� ��������� �����: ";
	cin >> forbiden_lenght;

	while (true) {
		try {
			cout << "������� �����: ";
			cin >> str;
			cout << "����� ����� " << str << " �����: " << function(str, forbiden_lenght) << "\n";
		}
		catch (exception& ex) {
			cout << ex.what();
			break;
		}
	}

	return 0;
}
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string user_name = "";

	cout << "������� ���: ";
	cin >> user_name;
	cout << "������������, " << user_name << "!\n";

	system("pause");

	return 0;
}
#include <iostream>
#include <string>
#include "LeaverLib.h"

int main() {
	DynamicLeaverLib::Leaver leaver;
	std::string user_name = "";

	std::cout << "Введите имя: ";
	std::cin >> user_name;
	std::cout << leaver.leave(user_name);

	return 0;
}
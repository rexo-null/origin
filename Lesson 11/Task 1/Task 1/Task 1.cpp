#include <iostream>
#include <string>
#include "Greeter.h"

int main() {
    Greeter::Greeter greeter;

    std::string user_name;

    std::cout << "Введите имя: ";
    std::cin >> user_name;

    greeter.SetName(user_name);

    std::cout << "\nЗдравствуйте, " << greeter.GetName() << "! \n";

    return 0;
}
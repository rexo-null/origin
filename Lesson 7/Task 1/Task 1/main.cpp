#include "summary.h"
#include <iostream>
#define MODE 1


#if defined(MODE) 
int main() {
#if MODE == 0
	std::cout << "������� � ������ ����������.\n";

#elif MODE == 1
	std::cout << "������� � ������ ������.\n";
	summ();

#elif MODE != 0 || MODE !=1
	std::cout << "����������� �����, ���������� ������.";

#endif
}
#else
#error "Error compilation, MODE undefined"
#endif

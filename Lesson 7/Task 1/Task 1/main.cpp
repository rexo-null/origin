#include "summary.h"
#include <iostream>
#define MODE 1


#if defined(MODE) 
int main() {
#if MODE == 0
	std::cout << "Работаю в режиме тренировки.\n";

#elif MODE == 1
	std::cout << "Работаю в боевом режиме.\n";
	summ();

#elif MODE != 0 || MODE !=1
	std::cout << "Неизвестный режим, завершение работы.";

#endif
}
#else
#error "Error compilation, MODE undefined"
#endif

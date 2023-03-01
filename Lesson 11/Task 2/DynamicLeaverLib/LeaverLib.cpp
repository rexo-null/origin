#include <string>
#include "LeaverLib.h"

namespace LeaverLib {
	std::string Leaver::leave(std::string name) {
		return "\nДо свидания, " + name + "!\n";
	}
}
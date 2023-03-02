#include <string>
#include "LeaverLib.h"

namespace DynamicLeaverLib {
	std::string Leaver::leave(std::string name) {
		return "\nДо свидания, " + name + "!\n";
	}
}
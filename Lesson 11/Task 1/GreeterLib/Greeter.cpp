#include <string>
#include "Greeter.h"

namespace Greeter {
	Greeter::Greeter() {
		this->name = "";
	};

	void Greeter::SetName(std::string name) {
		this->name = name;
	};

	std::string Greeter::GetName() {
		return this->name;
	};
}
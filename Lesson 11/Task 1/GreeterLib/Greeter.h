#pragma once
#include <string>

namespace Greeter {
	class Greeter {
	public:
		Greeter();
		void SetName(std::string name);
		std::string GetName();

	private:
		std::string name;
	};
}
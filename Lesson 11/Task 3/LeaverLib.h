#pragma once
#ifdef DYNAMICLEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include <string>

namespace DynamicLeaverLib {
	class Leaver {
	public:
		LEAVERLIB_API std::string leave(std::string name);
	};
}
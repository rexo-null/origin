#pragma once
#ifdef LEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include <string>

namespace DynamicLeaverLib {
	LEAVERLIB_API class Leaver {
	public:
		std::string leave(std::string name);
	};
}
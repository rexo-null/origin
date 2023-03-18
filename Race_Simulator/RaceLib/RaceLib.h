#pragma once

#ifdef RACELIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else 
#define LIB_API __declspec(dllimport)
#endif

#include <iostream>
#include <vector>

#include "All_Terraint_Boots.h"
#include "Camel.h"
#include "Centaur.h"
#include "Faster_Camel.h"

#include "Show_result.h"
#include "Sort.h"

#include "Broom.h"
#include "Eagle.h"
#include "Magic_Carpet.h"

LIB_API void ground_race();
LIB_API void air_race();
LIB_API void race_together();
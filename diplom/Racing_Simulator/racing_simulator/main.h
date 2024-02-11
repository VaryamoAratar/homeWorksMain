#pragma once

#include "broomstick.h"
#include "eagle.h"
#include "magic_carpet.h"
#include "camel.h"
#include "centaur.h"
#include "rover_boots.h"
#include "swift_camel.h"
#include "race.h"
#include "race_function.h"
#include <string>

#ifdef RACEFUNCTION_EXPORTS
#define FUNCTION_API __declspec(dllexport)
#else
#define FUNCTION_API __declspec(dllimport)
#endif // RACE_FUNCTION_EXPORTS

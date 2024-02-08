#pragma once

#include "Broomstick.h"
#include "Eagle.h"
#include "MagicCarpet.h"
#include "Camel.h"
#include "Centaur.h"
#include "RoverBoots.h"
#include "SwiftCamel.h"
#include "Race_compil.h"
#include "Function.h"
#include <string>

#ifdef RACEFUNCTION_EXPORTS
#define FUNCTION_API __declspec(dllexport)
#else
#define FUNCTION_API __declspec(dllimport)
#endif // RACE_FUNCTION_EXPORTS

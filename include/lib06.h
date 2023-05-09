/* Copyright (C) 2023 Harry Clark */

/* SONIC THE HEDGEHOG (2006) Library */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY RELATIVE TOWARDS THE ENTIRE LIBRARY */
/* THE NECESSARY FUNCTIONS AND CALLING CONVENTIONS WILL BE PRESENT HERE */

#ifndef LIB_O6
#define LIB_06

/* NESTED INCLUDES */

#include "common.h"

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdbool.h>

#if defined _WIN32
    #ifdef LIB_06_EXPORT
       #define LIB_06_MAIN DECLSPEC (dllexport)
    #else
       #define LIB_06_MAIN DECLSPEC (dllimport)
    #endif

#elif defined _GNUC && _GNUC >= 4
    #define LIB_06_MAIN __attribute__ ((visibility)("default"))
#else
    #define LIB_06_MAIN
#endif

#ifndef LIB_TYPES
#define LIB_TYPES

typedef unsigned char BYTE;
typedef signed char SIGNED_BYTE;
typedef unsigned short SHORT;

#define LIB_06_WIN          (0)
#define LIB_06_OSX          (1)
#define LIB_06_XENIA        (2)
#define LIB_06_RPCS3        (3)

#define LIB_06_UNK          NULL

#endif

#endif

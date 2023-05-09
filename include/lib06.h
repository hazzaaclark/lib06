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

/* ASSUMING THE PROJECT IS BEING BUILT WITH WINDOWS */ 
/* ACCESS THE DESIGANTED CALLING CONVENTION */ 

#if defined(_WIN32)
    #ifdef LIB_06_EXPORT
       #define LIB_06_MAIN DECLSPEC (dllexport)
    #else
       #define LIB_06_MAIN DECLSPEC (dllimport)
    #endif

#define LIB_06_MAIN
#endif

#endif

/* Copyright (C) 2023 Harry Clark */

/* SONIC THE HEDGEHOG (2006) Library */

/* THIS FILE PERTAINS TO THE MATHS UTILITY OF THE ENGINE DECOMP OF */
/* SONIC THE HEDGEHOG (2006) */

#ifndef MATH_UTIL
#define MATH_UTIL

#if defined (COMMON_MATHS)
#define COMMON_MATHS
#else
#define COMMON_MATHS

#define PI               3.141592653589793
#define SECOND           1
#define METER            100
#define KILOMETER        (METER * 1000)
#define GRAVITY          (METER * 9.8) / (SECOND * SECOND)

#endif

#endif

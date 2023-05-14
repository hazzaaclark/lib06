/* Copyright (C) 2023 Harry Clark */

/* SONIC THE HEDGEHOG (2006) Library */

/* THIS FILE PERTAINS TO THE MATHS UTILITY OF THE ENGINE DECOMP OF */
/* SONIC THE HEDGEHOG (2006) */

#ifndef MATH_UTIL
#define MATH_UTIL

/* NESTED INCLUDES */

#include "common.h"

#if defined (COMMON_MATHS)
#define COMMON_MATHS
#else
#define COMMON_MATHS

#define PI               3.141592653589793
#define SECOND           1
#define METER            100
#define KILOMETER        (METER * 1000)
#define GRAVITY          (METER * 9.8) / (SECOND * SECOND)

#define SIN (VALUE) SINE_TABLE[(U16) (VALUE) >> 3]
#define COS (VALUE) COSINE_TABLE[(U16) (VALUE >> 3)]

#endif

extern "C"
{
	extern F32 SINE_TABLE[];
	extern F32 COSINE_TABLE[];
	extern F32 QUATERNION_ANGLE;
}

#if defined (ENABLE_ROTATION)
#define ENABLE_ROTATION
#else
#define ENABLE_ROTATION

#define ANGLE S32

#define DEG_TO_RADIAN (VALUE) \
static DEG_TO_RADIAN((VALUE) * PI / 180.0);

#define DEG_TO_ANGLE (VALUE) \
static DEG_TO_ANGLE((ANGLE)(((VALUE) * 65536.0 / 360.0)));

#endif

VOID_FUNCTION(VECTOR_3_ADD);
VOID_FUNCTION(VECTOR_3_SET);

#endif

/* Copyright (C) 2023 Harry Clark */

/* SONIC THE HEDGEHOG (2006) Library */

/* THIS FILE PERTAINS TO THE GEOMETRY UTILITY OF THE ENGINE DECOMP OF */
/* SONIC THE HEDGEHOG (2006) */

/* EVERYTHING PERTAINING TO HOW GEOMETRY WORKS WITHIN THE ENGINE */
/* SUCH AS COLLISONS, HEIGHTMAPS, MATERIALS, ETC */

/* ALL OF WHICH IS WORKING IN TANDEM WITH THE MATHS UTILITY AND ANY OTHER */
/* PRE-REQUISITE HEADER FILES */

#ifndef GEO
#define GEO

/* NESTED INCLUDES */

#include "common.h"

#if defined (GEO_FLAGS)
#define GEO_FLAGS
#else
#define GEO_FLAGS

#define GEO_FLAG_NONE          0 
#define GEO_FLAG_SET           1
#define GEO_FLAG_CLEAR         2

#define GEO_FLAG_SHIFT         sizeof(VALUE*) >> &U32)

#endif

#if defined (GEO_STRUCTS)
#define GEO_STRUCTS
#else
#define GEO_STRUCTS

typedef struct ANIMATION_INDEX;
typedef struct ANIMATION_INFO;
typedef struct CAMERA_PARAM;
typedef struct CAMERA_INFO;
typedef struct COLLISION;
typedef struct COLLISION_INFO;
typedef struct ENTITY;
typedef struct HEIGHT_MAP;
typedef struct SET_ENTITY;

#endif

#endif

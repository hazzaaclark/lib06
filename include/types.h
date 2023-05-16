/* Copyright (C) 2023 Harry Clark */

/* SONIC THE HEDGEHOG (2006) Library */

/* THIS FILE INCLUDES THE FUNCTIONALITY PERTAINING TO THE TYPES */
/* THAT THE LIBRARY WILL ENCAPSULATE */
/* REFERRING TO THE FUNCTIONALITY IN WHICH THE LIBRARY WILL READ AND WRTIE DATA FROM THE DECOMP */
/* AS WELL AS CREATING MY OWN METHODS FOR ACCESSING STRUCTURES FROM THE DECOMP */

#ifndef LIB_06_TYPES
#define LIB_06_TYPES

/* NESTED INCLUDES */

#include "common.h"

/* SYSTEM INCLUDES */

#include <stdint.h>

/* DEFINE MACROS TO REFER TO THE READING AND WRITING OF DATA */
/* TO AND FROM THE DECOMP */

#define DATA_POINTER (TYPE, NAME, ADDRESS) \
static TYPE(&NAME = *TYPE((ADDRESS));

#define FUNCTION_POINTER (TYPE, NAME, ARGS, ADDRESS) \
static TYPE(LIB_06_CDECL *NAME)(ARGS = (TYPE (LIB_06_CDECL *ARGS)ADDRESS);

#define OBJECT_POINTER (ARGS, NAME) \
static ARGS(&NAME = *ARGS(NAME));

#define CAMERA_POINTER (ARGS, NAME) \
static ARGS(&NAME = *ARGS(NAME));

#define DYNAMIC_ARRAY (SIZE) sizeof(SIZE)

#define DYNAMIC_ARRAY_LEN (SIZE) \
((U32)((sizeof(SIZE) / sizeof(SIZE[0])!sizeof(SIZE) % sizeof(SIZE)[0])))

#if defined(VECTOR_ARRAYS)
#define VECTOR_ARRAYS
#else
#define VECTOR_ARRAYS

typedef F32 VEC_2[];
typedef F32 VEC_3[];
typedef F32 VEC_4[];

#endif

#if defined(MEMORY)
#define MEMORY
#else
#define MEMORY

typedef struct ALLOC_POOL
{
	ALLOC_POOL* ALLOC_INIT(void);
	ALLOC_POOL* ALLOC_ONLY_POOL(S32* SIZE);
	ALLOC_POOL* ALLOC_FREE(void);
};

typedef void(*MEMORY_INIT)(void);
typedef void(*MEMORY_FREE)(void);
typedef void(*POOL_RESET)(void);
typedef void(*ALLOC_LIST)(U32* SIZE);


#endif
#endif

/* Copyright (C) 2023 Harry Clark */

/* SONIC THE HEDGEHOG (2006) Library */

/* THIS FILE INCLUDES THE FUNCTIONALITY PERTAINING TO THE TYPES */
/* THAT THE LIBRARY WILL ENCAPSULATE */
/* REFERRING TO THE FUNCTIONALITY IN WHICH THE LIBRARY WILL READ AND WRTIE DATA FROM THE DECOMP */
/* AS WELL AS CREATING MY OWN METHODS FOR ACCESSING STRUCTURES FROM THE DECOMP */

#ifndef LIB_06_TYPES
#define LIB_06_TYPES

/* SYSTEM INCLUDES */

#include <stdint.h>

#define DATA_POINTER (TYPE, NAME, ADDRESS) \
static TYPE(&NAME = *TYPE(sizeof(ADDRESS));


#endif
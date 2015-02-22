#ifndef c_NULL_h_
#define c_NULL_h_

#include "c/_c_namespace.h"

_c_namespace

#ifdef __cplusplus
static const auto NULL = nullptr;
#else
static void* NULL = 0; // This might be going too far.
#endif

 _c_namespace_end

#endif

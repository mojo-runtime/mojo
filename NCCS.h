#ifndef c_NCCS_h_
#define c_NCCS_h_

#include "c/size_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const size_t
NCCS =
#ifdef __linux__
#  ifdef __x86_64__
 19 // USUALLY
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

#ifndef _c__NCCS_h
#define _c__NCCS_h

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

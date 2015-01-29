#ifndef _c__EMFILE_h
#define _c__EMFILE_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
EMFILE =
#ifdef __linux__
 24
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

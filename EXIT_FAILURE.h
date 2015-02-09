#ifndef c_EXIT_FAILURE_h_
#define c_EXIT_FAILURE_h_

#include "c/ExitStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static const ExitStatus EXIT_FAILURE = 1;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

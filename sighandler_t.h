#ifndef _c__sighandler_t_h
#define _c__sighandler_t_h

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

typedef void (*sighandler_t)(SignalNumber);

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

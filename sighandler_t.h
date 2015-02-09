#ifndef c_sighandler_t_h_
#define c_sighandler_t_h_

#include "c/SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

typedef void (*sighandler_t)(SignalNumber);

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

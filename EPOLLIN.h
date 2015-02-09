#ifndef c_EPOLLIN_h_
#define c_EPOLLIN_h_

#include "c/POLLIN.h"
#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLIN =
#ifdef __linux__
 POLLIN
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

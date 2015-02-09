#ifndef c_EPOLLERR_h_
#define c_EPOLLERR_h_

#include "c/POLLERR.h"
#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLERR =
#ifdef __linux__
 POLLERR
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

#ifndef SIG_IGN

#if defined(__linux__) || defined(__FreeBSD__)
#  include "sighandler_t.h"
#  define SIG_IGN ((sighandler_t)1)
#else
#  error
#endif

#endif

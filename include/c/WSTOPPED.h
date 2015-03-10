#ifndef WSTOPPED

#if defined(__linux__) || defined(__FreeBSD__)
#  include "WUNTRACED.h"
#  define WSTOPPED WUNTRACED
#else
#  error
#endif

#endif

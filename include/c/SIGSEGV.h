#if defined(__linux__)
#  include "linux/SIGSEGV.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIGSEGV.h"
#else
#  error
#endif

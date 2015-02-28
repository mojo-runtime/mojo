#if defined(__linux__)
#  include "linux/SIGABRT.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIGABRT.h"
#else
#  error
#endif

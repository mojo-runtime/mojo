#if defined(__linux__)
#  include "linux/EDOM.h"
#elif defined(__FreeBSD__)
#  include "freebsd/EDOM.h"
#else
#  error
#endif

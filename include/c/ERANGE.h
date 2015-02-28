#if defined(__linux__)
#  include "linux/ERANGE.h"
#elif defined(__FreeBSD__)
#  include "freebsd/ERANGE.h"
#else
#  error
#endif

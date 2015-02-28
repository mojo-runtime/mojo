#if defined(__linux__)
#  include "linux/uid_t.h"
#elif defined(__FreeBSD__)
#  include "freebsd/uid_t.h"
#else
#  error
#endif

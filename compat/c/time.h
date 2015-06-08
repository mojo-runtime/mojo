#if defined(__FreeBSD__)
#  include <freebsd/_time.h>
#elif defined(__linux__)
#  include <linux/_time.h>
#else
#  error
#endif

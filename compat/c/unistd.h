#if defined(__FreeBSD__)
#  include <freebsd/_unistd.h>
#elif defined(__linux__)
#  include <linux/_unistd.h>
#else
#  error
#endif

#if defined(__FreeBSD__)
#  include <freebsd/_signal.h>
#elif defined(__linux__)
#  include <linux/_signal.h>
#else
#  error
#endif

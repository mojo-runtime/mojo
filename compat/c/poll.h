#if defined(__FreeBSD__)
#  include <freebsd/poll/@all.h>
#elif defined(__linux__)
#  include <linux/poll/@all.h>
#else
#  error
#endif

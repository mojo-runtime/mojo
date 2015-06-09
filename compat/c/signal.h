#if defined(__FreeBSD__)
#  include <freebsd/signal/@all.h>
#elif defined(__linux__)
#  include <linux/signal/@all.h>
#else
#  error
#endif

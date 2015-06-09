#if defined(__FreeBSD__)
#  include <freebsd/fcntl/@all.h>
#elif defined(__linux__)
#  include <linux/fcntl/@all.h>
#else
#  error
#endif

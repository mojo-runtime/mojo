#if defined(__FreeBSD__)
#  include <freebsd/dirent/@all.h>
#elif defined(__linux__)
#  include <linux/dirent/@all.h>
#else
#  error
#endif

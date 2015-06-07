#if defined(__FreeBSD__)
#  include <freebsd/c/_dirent.h>
#elif defined(__linux__)
#  include <linux/c/_dirent.h>
#else
#  error
#endif

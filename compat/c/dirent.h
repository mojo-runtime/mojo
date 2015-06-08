#if defined(__FreeBSD__)
#  include <freebsd/_dirent.h>
#elif defined(__linux__)
#  include <linux/_dirent.h>
#else
#  error
#endif

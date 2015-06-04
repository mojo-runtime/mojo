#if defined(__FreeBSD__)
#  include <os/freebsd/c/__dirent.h>
#elif defined(__linux__)
#  include <os/linux/c/__dirent.h>
#else
#  error
#endif

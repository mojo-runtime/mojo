#if defined(__FreeBSD__)
#  include <os/freebsd/c/_dirent.h>
#elif defined(__linux__)
#  include <os/linux/c/_dirent.h>
#else
#  error
#endif

#if defined(__FreeBSD__)
#  include <os/freebsd/c/__utsname.h>
#elif defined(__linux__)
#  include <os/linux/c/__utsname.h>
#else
#  error
#endif

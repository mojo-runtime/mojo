#if defined(__FreeBSD__)
#  include <os/freebsd/c/_utsname.h>
#elif defined(__linux__)
#  include <os/linux/c/_utsname.h>
#else
#  error
#endif

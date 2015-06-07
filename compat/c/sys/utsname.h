#if defined(__FreeBSD__)
#  include <freebsd/c/_utsname.h>
#elif defined(__linux__)
#  include <linux/c/_utsname.h>
#else
#  error
#endif

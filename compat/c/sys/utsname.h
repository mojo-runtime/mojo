#if defined(__FreeBSD__)
#  include <freebsd/_utsname.h>
#elif defined(__linux__)
#  include <linux/_utsname.h>
#else
#  error
#endif

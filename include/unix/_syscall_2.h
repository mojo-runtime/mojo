#if defined(__linux__)
#  include "linux/_syscall_2.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_2.h"
#else
#  error
#endif

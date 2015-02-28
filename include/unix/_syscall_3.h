#if defined(__linux__)
#  include "linux/_syscall_3.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_3.h"
#else
#  error
#endif

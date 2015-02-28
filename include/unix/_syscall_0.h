#if defined(__linux__)
#  include "linux/_syscall_0.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_0.h"
#else
#  error
#endif

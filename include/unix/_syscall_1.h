#if defined(__linux__)
#  include "linux/_syscall_1.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_1.h"
#else
#  error
#endif

#if defined(__linux__)
#  include "linux/_syscall_6.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_6.h"
#else
#  error
#endif

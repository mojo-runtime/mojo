#if defined(__linux__)
#  include "linux/_syscall_4.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_4.h"
#else
#  error
#endif

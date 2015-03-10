#if defined(__linux__)
#  include "linux/_syscall_5.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_5.h"
#else
#  error
#endif

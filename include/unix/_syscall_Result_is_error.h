#if defined(__linux__)
#  include "linux/_syscall_Result_is_error.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_Result_is_error.h"
#else
#  error
#endif

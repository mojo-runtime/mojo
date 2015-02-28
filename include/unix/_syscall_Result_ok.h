#if defined(__linux__)
#  include "linux/_syscall_Result_ok.h"
#elif defined(__FreeBSD__)
#  include "freebsd/_syscall_Result_ok.h"
#else
#  error
#endif

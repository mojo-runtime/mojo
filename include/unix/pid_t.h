#if defined(__linux__)
#  include "linux/pid_t.h"
#elif defined(__FreeBSD__)
#  include "freebsd/pid_t.h"
#else
#  error
#endif

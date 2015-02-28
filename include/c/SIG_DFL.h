#if defined(__linux__)
#  include "linux/SIG_DFL.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIG_DFL.h"
#else
#  error
#endif

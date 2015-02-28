#if defined(__linux__)
#  include "linux/SIG_ERR.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIG_ERR.h"
#else
#  error
#endif

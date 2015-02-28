#if defined(__linux__)
#  include "linux/SIG_IGN.h"
#elif defined(__FreeBSD__)
#  include "freebsd/SIG_IGN.h"
#else
#  error
#endif

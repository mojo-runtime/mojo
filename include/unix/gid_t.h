#if defined(__linux__)
#  include "linux/gid_t.h"
#elif defined(__FreeBSD__)
#  include "freebsd/gid_t.h"
#else
#  error
#endif

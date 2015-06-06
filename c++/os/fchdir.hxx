#if defined(__FreeBSD__)
#  include "freebsd/fchdir.hxx"
#elif defined(__linux__)
#  include "linux/fchdir.hxx"
#else
#  error
#endif

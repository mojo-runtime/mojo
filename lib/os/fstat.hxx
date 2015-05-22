#if defined(__FreeBSD__)
#  include "freebsd/fstat.hxx"
#elif defined(__linux__)
#  include "linux/fstat.hxx"
#else
#  error
#endif

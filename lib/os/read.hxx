#if defined(__FreeBSD__)
#  include "freebsd/read.hxx"
#elif defined(__linux__)
#  include "linux/read.hxx"
#else
#  error
#endif

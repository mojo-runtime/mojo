#if defined(__FreeBSD__)
#  include "freebsd/open.hxx"
#elif defined(__linux__)
#  include "linux/open.hxx"
#else
#  error
#endif

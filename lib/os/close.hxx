#if defined(__FreeBSD__)
#  include "freebsd/close.hxx"
#elif defined(__linux__)
#  include "linux/close.hxx"
#else
#  error
#endif

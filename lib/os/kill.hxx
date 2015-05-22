#if defined(__FreeBSD__)
#  include "freebsd/kill.hxx"
#elif defined(__linux__)
#  include "linux/kill.hxx"
#else
#  error
#endif

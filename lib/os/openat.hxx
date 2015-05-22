#if defined(__FreeBSD__)
#  include "freebsd/openat.hxx"
#elif defined(__linux__)
#  include "linux/openat.hxx"
#else
#  error
#endif

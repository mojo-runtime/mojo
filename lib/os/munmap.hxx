#if defined(__FreeBSD__)
#  include "freebsd/munmap.hxx"
#elif defined(__linux__)
#  include "linux/munmap.hxx"
#else
#  error
#endif

#if defined(__FreeBSD__)
#  include "freebsd/readlink.hxx"
#elif defined(__linux__)
#  include "linux/readlink.hxx"
#else
#  error
#endif

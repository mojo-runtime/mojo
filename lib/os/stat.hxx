#if defined(__FreeBSD__)
#  include "freebsd/stat.hxx"
#elif defined(__linux__)
#  include "linux/stat.hxx"
#else
#  error
#endif

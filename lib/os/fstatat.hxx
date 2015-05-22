#if defined(__FreeBSD__)
#  include "freebsd/fstatat.hxx"
#elif defined(__linux__)
#  include "linux/fstatat.hxx"
#else
#  error
#endif

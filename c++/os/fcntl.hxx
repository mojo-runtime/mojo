#if defined(__FreeBSD__)
#  include "freebsd/fcntl.hxx"
#elif defined(__linux__)
#  include "linux/fcntl.hxx"
#else
#  error
#endif

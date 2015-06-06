#if defined(__FreeBSD__)
#  include "freebsd/rmdir.hxx"
#elif defined(__linux__)
#  include "linux/rmdir.hxx"
#else
#  error
#endif

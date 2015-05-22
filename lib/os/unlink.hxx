#if defined(__FreeBSD__)
#  include "freebsd/unlink.hxx"
#elif defined(__linux__)
#  include "linux/unlink.hxx"
#else
#  error
#endif

#if defined(__FreeBSD__)
#  include "freebsd/write.hxx"
#elif defined(__linux__)
#  include "linux/write.hxx"
#else
#  error
#endif

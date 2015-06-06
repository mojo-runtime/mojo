#if defined(__FreeBSD__)
#  include "freebsd/pipe2.hxx"
#elif defined(__linux__)
#  include "linux/pipe2.hxx"
#else
#  error
#endif

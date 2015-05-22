#if defined(__FreeBSD__)
#  include "freebsd/fork.hxx"
#elif defined(__linux__)
#  include "linux/fork.hxx"
#else
#  error
#endif

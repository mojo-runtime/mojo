#if defined(__FreeBSD__)
#  include "freebsd/chmod.hxx"
#elif defined(__linux__)
#  include "linux/chmod.hxx"
#else
#  error
#endif

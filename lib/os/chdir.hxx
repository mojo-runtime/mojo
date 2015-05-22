#if defined(__FreeBSD__)
#  include "freebsd/chdir.hxx"
#elif defined(__linux__)
#  include "linux/chdir.hxx"
#else
#  error
#endif

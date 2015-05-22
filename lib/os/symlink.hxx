#if defined(__FreeBSD__)
#  include "freebsd/symlink.hxx"
#elif defined(__linux__)
#  include "linux/symlink.hxx"
#else
#  error
#endif

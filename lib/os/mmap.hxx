#if defined(__FreeBSD__)
#  include "freebsd/mmap.hxx"
#elif defined(__linux__)
#  include "linux/mmap.hxx"
#else
#  error
#endif

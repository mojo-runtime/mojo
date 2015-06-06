#if defined(__FreeBSD__)
#  include "freebsd/ioctl.hxx"
#elif defined(__linux__)
#  include "linux/ioctl.hxx"
#else
#  error
#endif

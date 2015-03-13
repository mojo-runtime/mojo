#if defined(__gnu_linux__)
#  include "_glibc_/assertion_error.hxx"
#elif defined(__FreeBSD__)
#  include "_bsd_/assertion_error.hxx"
#else
#  error
#endif

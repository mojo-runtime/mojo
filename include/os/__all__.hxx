#include "exit.hxx"
#if defined(__linux__) || defined(__FreeBSD__)
#  include "getegid.hxx"
#  include "geteuid.hxx"
#  include "getgid.hxx"
#  include "getpgid.hxx"
#  include "getpid.hxx"
#  include "getppid.hxx"
#endif
#if defined(__linux__)
#  include "gettid.hxx"
#endif
#if defined(__linux__) || defined(__FreeBSD__)
#  include "getuid.hxx"
#endif

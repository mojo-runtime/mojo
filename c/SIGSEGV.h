#ifndef SIGSEGV
#  ifdef __linux__
#    define SIGSEGV 11
#  else
#    error
#  endif
#endif

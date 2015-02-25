#ifndef ENOEXEC
#  ifdef __linux__
#    define ENOEXEC 8
#  else
#    error
#  endif
#endif

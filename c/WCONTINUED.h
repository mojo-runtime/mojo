#ifndef WCONTINUED
#  ifdef __linux__
#    define WCONTINUED 8
#  else
#    error
#  endif
#endif

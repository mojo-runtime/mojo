#ifndef EDEADLK
#  ifdef __linux__
#    ifdef __x86_64__ // generic
#      define EDEADLK 35
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

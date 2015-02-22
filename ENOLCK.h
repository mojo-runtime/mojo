#ifndef ENOLCK
#  ifdef __linux__
#    ifdef __x86_64__ // generic
#      define ENOLCK 37
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

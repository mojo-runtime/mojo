#ifndef ELIBBAD
#  ifdef __linux__
#    ifdef __x86_64__
#      define ELIBBAD 80
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

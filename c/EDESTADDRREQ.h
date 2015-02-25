#ifndef EDESTADDRREQ
#  ifdef __linux__
#    ifdef __x86_64__
#      define EDESTADDRREQ 89
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

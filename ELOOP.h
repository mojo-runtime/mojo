#ifndef ELOOP
#  ifdef __linux__
#    ifdef __x86_64__
#      define ELOOP 40
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

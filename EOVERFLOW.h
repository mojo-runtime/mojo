#ifndef EOVERFLOW
#  ifdef __linux__
#    ifdef __x86_64__
#      define EOVERFLOW 75
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#ifndef NCCS
#  ifdef __linux__
#    ifdef __x86_64__
#      define NCCS 19
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

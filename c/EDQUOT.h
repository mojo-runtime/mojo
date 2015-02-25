#ifndef EDQUOT
#  ifdef __linux__
#    ifdef __x86_64__
#      define EDQUOT 122
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

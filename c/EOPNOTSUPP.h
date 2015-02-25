#ifndef EOPNOTSUPP
#  ifdef __linux__
#    ifdef __x86_64__
#      define EOPNOTSUPP 94
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

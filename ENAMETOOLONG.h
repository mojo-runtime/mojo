#ifndef ENAMETOOLONG
#  ifdef __linux__
#    ifdef __x86_64__
#      define ENAMETOOLONG 36
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#ifndef ENOSYS
#  ifdef __linux__
#    ifdef __x86_64__
#      define ENOSYS 38
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

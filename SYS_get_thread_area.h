#ifndef SYS_get_thread_area
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_get_thread_area 211
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

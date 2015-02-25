#ifndef SYS_set_thread_area
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_set_thread_area 205
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

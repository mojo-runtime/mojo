#ifndef SYS_inotify_init1
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_inotify_init1 294
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

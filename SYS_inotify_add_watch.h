#ifndef SYS_inotify_add_watch
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_inotify_add_watch 254
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

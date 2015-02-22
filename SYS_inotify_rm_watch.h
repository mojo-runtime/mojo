#ifndef SYS_inotify_rm_watch
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_inotify_rm_watch 255
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

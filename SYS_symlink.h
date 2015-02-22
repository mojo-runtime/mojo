#ifndef SYS_symlink
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_symlink 88
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

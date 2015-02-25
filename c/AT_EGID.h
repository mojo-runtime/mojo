#ifndef AT_EGID
#  ifdef __linux__
#    define AT_EGID 14
#  else
#    error
#  endif
#endif

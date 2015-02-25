#ifndef DT_FIFO
#  ifdef __linux__
#    define DT_FIFO 1
#  else
#    error
#  endif
#endif

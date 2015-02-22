#ifndef CLOCK_REALTIME
#  ifdef __linux__
#    define CLOCK_REALTIME 0
#  else
#    error
#  endif
#endif

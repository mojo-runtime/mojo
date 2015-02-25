#ifndef EPIPE
#  ifdef __linux__
#    define EPIPE 32
#  else
#    error
#  endif
#endif

#ifndef ESPIPE
#  ifdef __linux__
#    define ESPIPE 29
#  else
#    error
#  endif
#endif

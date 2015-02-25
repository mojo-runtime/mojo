#ifndef ENXIO
#  ifdef __linux__
#    define ENXIO 6
#  else
#    error
#  endif
#endif

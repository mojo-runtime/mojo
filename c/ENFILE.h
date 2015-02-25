#ifndef ENFILE
#  ifdef __linux__
#    define ENFILE 23
#  else
#    error
#  endif
#endif

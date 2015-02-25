#ifndef PROT_READ
#  ifdef __linux__
#    define PROT_READ 0
#  else
#    error
#  endif
#endif

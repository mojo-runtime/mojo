#ifndef PROT_NONE
#  ifdef __linux__
#    define PROT_NONE 0
#  else
#    error
#  endif
#endif

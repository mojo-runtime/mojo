#ifndef PROT_WRITE
#  ifdef __linux__
#    define PROT_WRITE 2
#  else
#    error
#  endif
#endif

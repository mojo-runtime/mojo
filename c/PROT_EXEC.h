#ifndef PROT_EXEC
#  ifdef __linux__
#    define PROT_EXEC 4
#  else
#    error
#  endif
#endif

#ifdef __linux__
#  ifdef __x86_64__
#    include "c/linux/x86_64/_exit.h"
#  else
#    error
#  endif
#else
#  error
#endif

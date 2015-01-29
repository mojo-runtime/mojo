#ifndef _NORETURN
#  ifdef __cplusplus
#    define _NORETURN [[noreturn]]
#  else
#    define _NORETURN _Noreturn
#  endif
#endif

#ifndef __c_NORETURN
#  ifdef __cplusplus
#    define __c_NORETURN [[noreturn]]
#  else
#    define __c_NORETURN _Noreturn
#  endif
#endif

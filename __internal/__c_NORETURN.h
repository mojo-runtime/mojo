#ifndef __c_NORETURN
#  ifdef __cplusplus
#    define __c_NORETURN [[noreturn]]
#  else
#    define __c_NORETURN __attribute__((__noreturn__))
#  endif
#endif

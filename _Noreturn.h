#ifndef _Noreturn
#  ifdef __cplusplus // assuming C++11
#    define _Noreturn [[noreturn]]
#  else
#    if !(defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L)
#      error
#    endif
#  endif
#endif

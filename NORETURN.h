#ifndef NORETURN
#  ifdef __cplusplus // assuming C++11
#    define NORETURN [[noreturn]]
#  else
#    if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#      define NORETURN _Noreturn
#    else
#      error
#    endif
#  endif
#endif

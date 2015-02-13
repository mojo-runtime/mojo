#ifndef noexcept
#  ifdef __cplusplus
#    if __cplusplus >= 201103L
//
#    else
#      define noexcept throw()
#    endif
#  else
#    define noexcept
#  endif
#endif

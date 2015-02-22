#ifndef x_noexcept
#  ifdef __cplusplus
#    if __cplusplus >= 201103L
#      define x_noexcept noexcept
#    else
#      define x_noexcept throw()
#    endif
#  else
#    define x_noexcept
#  endif
#endif

#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__clang__)
#    define __flexible_array(name)                                      \
    _Pragma("clang diagnostic push")                                    \
    _Pragma("clang diagnostic ignored \"-Wc99-extensions\"")            \
    name []                                                             \
    _Pragma("clang diagnostic pop")
#  elif defined(__GNUC__)
#    if ((__GNUC__ >= 2) || ((__GNUC__ == 2) && (__GNUC_MINOR__ >= 97)))
#      define __flexible_array(name) name []
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  if defined(__STDC_VERSION__)
#    if __STDC_VERSION__ >= 199901L
#      define __flexible_array(name) name []
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop

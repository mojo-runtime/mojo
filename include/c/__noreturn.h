#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_cpp_attribute)
#    if __has_cpp_attribute(noreturn)
#      define __noreturn [[noreturn]]
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#      define __noreturn [[noreturn]]
#    else
#      error
#    endif
#  else
#    error
#  endif
#elif defined(__STDC_VERSION__)
#  if __STDC_VERSION__ >= 201112L
#    define __noreturn _Noreturn
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop

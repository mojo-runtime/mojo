#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_cpp_attribute)
#    define __has_cpp_attribute_noreturn __has_cpp_attribute(noreturn)
#  elif defined(__GNUC__)
#    define __has_cpp_attribute_noreturn ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#  else
#    error
#  endif
#  if __has_cpp_attribute_noreturn
#    define __noreturn [[noreturn]]
#  else
#    error
#  endif
#else
#  if defined(__STDC_VERSION__)
#    define __has_c_noreturn (__STDC_VERSION__ >= 201112L)
#  else
#    define __has_c_noreturn 0
#  endif
#  if __has_c_noreturn
#    define __noreturn _Noreturn
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop

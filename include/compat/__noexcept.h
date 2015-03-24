#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_noexcept)
#      define __noexcept noexcept
#    else
#      error
#    endif
#  elif defined(__GNUC__) // Version?
#    if ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 6)))
#      define __noexcept noexcept
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  error
#endif

#pragma clang diagnostic pop

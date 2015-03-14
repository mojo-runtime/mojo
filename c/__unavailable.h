#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_attribute)
#  if __has_attribute(unavailable)
#    define __unavailable(x) __attribute__((__unavailable__(x)))
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __unavailable(x) __attribute__((__error__(x)))
#else
#  error
#endif

#pragma clang diagnostic pop

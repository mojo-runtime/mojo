#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_attribute)
#  if __has_attribute(unused)
#    define __unused __attribute__((__unused__))
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __unused __attribute__((__unused__))
#else
#  error
#endif

#pragma clang diagnostic pop

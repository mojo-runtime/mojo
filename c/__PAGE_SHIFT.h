#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define __PAGE_SHIFT 12
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define __PAGE_SHIFT 12
#else
#  error
#endif

#pragma clang diagnostic pop

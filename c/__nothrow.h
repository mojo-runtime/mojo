#ifndef __nothrow

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_attribute)
#  if __has_attribute(nothrow)
#    define __nothrow __attribute__((__nothrow__))
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __nothrow __attribute__((__nothrow__))
#else
#  error
#endif

#pragma clang diagnostic pop

#endif

#ifndef __optnone

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_attribute)
#  if __has_attribute(optnone)
#    define __optnone __attribute__((__optnone__))
#  else
#    error
#  endif
#elif defined(__GNUC__) // Version?
#  define __optnone __attribute__((__optimize__(0)))
#else
#  error
#endif

#pragma clang diagnostic pop

#endif

#ifndef __expect

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_builtin)
#  if __has_builtin(__builtin_expect)
#    define __expect __builtin_expect
#  endif
#elif defined(__GNUC__)
#  if (__GNUC__ >= 3)
#    define __expect __builtin_expect
#  endif
#else
#  error
#endif

#if !defined(__expect)
#  define __expect(x, y) (x)
#endif

#pragma clang diagnostic pop

#endif

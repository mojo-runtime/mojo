#ifndef c_memcmp_h_
#define c_memcmp_h_

#if !defined(has_builtin_memcmp)
#  if defined(__has_builtin)
#    define has_builtin_memcmp (__has_builtin(__builtin_memcmp))
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_memcmp 1
#  else
#    error
#  endif
#endif

#if has_builtin_memcmp
#  define memcmp __builtin_memcmp
#else
#  error
#endif

#endif

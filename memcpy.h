#ifndef c_memcpy_h_
#define c_memcpy_h_

#if !defined(has_builtin_memcpy)
#  if defined(__has_builtin)
#    define has_builtin_memcpy (__has_builtin(__builtin_memcpy))
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_memcpy 1
#  else
#    error
#  endif
#endif

#if has_builtin_memcpy
#  define memcpy __builtin_memcpy
#else
#  error
#endif

#endif

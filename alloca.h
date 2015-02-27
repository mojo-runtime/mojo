#ifndef c_alloca_h_
#define c_alloca_h_

#if !defined(has_builtin_alloca)
#  if defined(__has_builtin)
#    define has_builtin_alloca (__has_builtin(__builtin_alloca))
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_alloca 1
#  else
#    error
#  endif
#endif

#if has_builtin_alloca
#  define alloca __builtin_alloca
#else
#  error
#endif

#endif

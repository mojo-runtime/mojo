#ifndef c_memset_h_
#define c_memset_h_

#if !defined(has_builtin_memset)
#  if defined(__has_builtin)
#    define has_builtin_memset (__has_builtin(__builtin_memset))
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_memset 1
#  else
#    error
#  endif
#endif

#if has_builtin_memset
#  define memset __builtin_memset
#else
#  error
#endif

#endif

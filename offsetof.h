#ifndef c_offsetof_h_
#define c_offsetof_h_

#if !defined(has_builtin_offsetof)
#  if defined(__clang__) // Workaround: false negative (3.6.0)
#    define has_builtin_offsetof 1
#  elif defined(__GNUC__) // TODO: version
#    define has_builtin_offsetof 1
#  else
#    error
#  endif
#endif

#if has_builtin_offsetof
#  define offsetof __builtin_offsetof
#else
#  error
#endif

#endif

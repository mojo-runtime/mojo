#if !defined(has_builtin_addressof)
#  if defined(__has_builtin)
#    define has_builtin_addressof __has_builtin(__builtin_addressof)
#  else // Assuming clang-only
#    define has_builtin_addressof 0
#  endif
#endif

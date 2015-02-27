#if !defined(has_width_64_integer_types)
#  if defined(__x86_64__)
#    define has_width_64_integers 1
#  else
#    error
#  endif
#endif

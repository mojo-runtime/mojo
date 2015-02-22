#ifndef x_inline_namespace
#  if defined(__cplusplus) && __cplusplus >= 201103L
#    pragma clang diagnostic ignored "-Wc++98-compat"
#    pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
#    define x_inline_namespace(name) inline namespace name {
#    define x_inline_namespace_end }
#  else
#    define x_inline_namespace(name)
#    define x_inline_namespace_end
#  endif
#endif

#ifndef x_inline_namespace
#  ifdef __cplusplus
#    include "has/cxx/inline_namespaces.h"
#    if has_cxx_inline_namespaces
#      define x_inline_namespace(name) inline namespace name {
#      define x_inline_namespace_end }
#    endif
#  endif
#  ifndef x_inline_namespace
#    define x_inline_namespace(name)
#    define x_inline_namespace_end
#  endif
#endif

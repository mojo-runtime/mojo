#ifndef compiler_inline_namespace
#  ifdef __cplusplus
#    include "compiler/has/cxx/inline_namespaces.h"
#    if compiler_has_cxx_inline_namespaces
#      define compiler_inline_namespace(name) inline namespace name {
#      define compiler_inline_namespace_end }
#    endif
#  endif
#  ifndef compiler_inline_namespace
#    define compiler_inline_namespace(name)
#    define compiler_inline_namespace_end
#  endif
#endif

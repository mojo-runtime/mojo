#ifndef noreturn
#  ifdef __cplusplus
#    error Refusing to break C++11 '[[noreturn]]' by defining C11 convenience macro 'noreturn'
#  endif
#  include "c/_c_noreturn.h"
#  define noreturn _c_noreturn
#endif

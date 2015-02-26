#ifndef builtin_S64_h_
#define builtin_S64_h_

typedef
#ifdef __INT64_TYPE__
__INT64_TYPE__
#else
#  error
#endif
S64;

#endif

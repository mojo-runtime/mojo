#ifndef builtin_S8_h_
#define builtin_S8_h_

typedef
#ifdef __INT8_TYPE__
__INT8_TYPE__
#else
#  error
#endif
S8;

#endif

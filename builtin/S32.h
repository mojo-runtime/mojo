#ifndef builtin_S32_h_
#define builtin_S32_h_

typedef
#ifdef __INT32_TYPE__
__INT32_TYPE__
#else
#  error
#endif
S32;

#endif

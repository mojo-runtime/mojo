#ifndef builtin_S16_h_
#define builtin_S16_h_

typedef
#ifdef __INT16_TYPE__
__INT16_TYPE__
#else
#  error
#endif
S16;

#endif

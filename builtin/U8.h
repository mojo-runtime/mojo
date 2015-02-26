#ifndef builtin_U8_h_
#define builtin_U8_h_

typedef
#ifdef __UINT8_TYPE__
__UINT8_TYPE__
#else
#  error
#endif
U8;

#endif

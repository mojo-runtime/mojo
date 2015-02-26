#ifndef builtin_U32_h_
#define builtin_U32_h_

typedef
#ifdef __UINT32_TYPE__
__UINT32_TYPE__
#else
#  error
#endif
U32;

#endif

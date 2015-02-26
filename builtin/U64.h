#ifndef builtin_U64_h_
#define builtin_U64_h_

typedef
#ifdef __UINT64_TYPE__
__UINT64_TYPE__
#else
#  error
#endif
U64;

#endif

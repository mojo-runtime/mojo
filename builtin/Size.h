#ifndef builtin_Size_h_
#define builtin_Size_h_

typedef
#ifdef __SIZE_TYPE__
__SIZE_TYPE__
#else
#  error
#endif
Size;

#endif

#ifndef c_ptrdiff_t_h_
#define c_ptrdiff_t_h_

typedef
#ifdef __PTRDIFF_TYPE__
__PTRDIFF_TYPE__
#else
#  error
#endif
ptrdiff_t;

#endif

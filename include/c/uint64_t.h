#ifndef _c_uint64_t_h_
#define _c_uint64_t_h_

typedef
#ifdef __UINT64_TYPE__
__UINT64_TYPE__
#else
#  error
#endif
uint64_t;

#endif

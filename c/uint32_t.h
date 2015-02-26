#ifndef c_uint32_t_h_
#define c_uint32_t_h_

typedef
#ifdef __UINT32_TYPE__
__UINT32_TYPE__
#else
#  error
#endif
uint32_t;

#endif

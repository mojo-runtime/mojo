#ifndef c_uint_fast64_t_h_
#define c_uint_fast64_t_h_

typedef
#ifdef __UINT_FAST64_TYPE__
__UINT_FAST64_TYPE__
#else
#  error
#endif
uint_fast64_t;

#endif

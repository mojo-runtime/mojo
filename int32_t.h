#ifndef c_int32_t_h_
#define c_int32_t_h_

typedef
#ifdef __INT32_TYPE__
__INT32_TYPE__
#else
#  error
#endif
int32_t;

#endif

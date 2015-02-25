#ifndef c_int8_t_h_
#define c_int8_t_h_

typedef
#ifdef __INT8_TYPE__
__INT8_TYPE__
#else
#  error
#endif
int8_t;

#endif

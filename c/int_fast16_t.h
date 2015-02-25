#ifndef c_int_fast16_t_h_
#define c_int_fast16_t_h_

typedef
#ifdef __INT_FAST16_TYPE__
__INT_FAST16_TYPE__
#else
#  error
#endif
int_fast16_t;

#endif

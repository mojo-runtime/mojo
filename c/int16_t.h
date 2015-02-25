#ifndef c_int16_t_h_
#define c_int16_t_h_

typedef
#ifdef __INT16_TYPE__
__INT16_TYPE__
#else
#  error
#endif
int16_t;

#endif

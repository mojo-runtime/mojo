#ifndef c_intmax_t_h_
#define c_intmax_t_h_

typedef
#ifdef __INTMAX_TYPE__
__INTMAX_TYPE__
#else
#  error
#endif
intmax_t;

#endif

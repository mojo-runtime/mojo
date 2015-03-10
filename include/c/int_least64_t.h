#ifndef _c_int_least64_t_h_
#define _c_int_least64_t_h_

typedef
#ifdef __INT_LEAST64_TYPE__
__INT_LEAST64_TYPE__
#else
#  error
#endif
int_least64_t;

#endif

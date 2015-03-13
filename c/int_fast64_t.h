#ifndef _c_int_fast64_t_h_
#define _c_int_fast64_t_h_

typedef
#ifdef __INT_FAST64_TYPE__
__INT_FAST64_TYPE__
#else
#  error
#endif
int_fast64_t;

#endif

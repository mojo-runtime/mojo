#ifndef _c_int_fast32_t_h_
#define _c_int_fast32_t_h_

typedef
#ifdef __INT_FAST32_TYPE__
__INT_FAST32_TYPE__
#else
#  error
#endif
int_fast32_t;

#endif

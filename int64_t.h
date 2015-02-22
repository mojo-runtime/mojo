#ifndef c_int64_t_h_
#define c_int64_t_h_

typedef
#ifdef __INT64_TYPE__
__INT64_TYPE__
#else
#  error
#endif
int64_t;

#endif

#ifndef c_cc_t_h_
#define c_cc_t_h_

typedef
#ifdef __linux__
unsigned char
#else
#  error
#endif
cc_t;

#endif

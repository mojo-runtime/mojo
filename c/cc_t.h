#ifndef _c_cc_t_h_
#define _c_cc_t_h_

#if defined(__linux__) || defined(__FreeBSD__)
typedef unsigned char cc_t;
#else
#  error
#endif

#endif

#ifndef c_cc_t_h_
#define c_cc_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
unsigned char
#else
#  error
#endif
cc_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

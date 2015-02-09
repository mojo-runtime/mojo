#ifndef _c__cc_t_h
#define _c__cc_t_h

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

#ifndef _c__speed_t_h
#define _c__speed_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
unsigned int
#else
#  error
#endif
speed_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

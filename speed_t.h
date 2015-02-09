#ifndef c_speed_t_h_
#define c_speed_t_h_

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

#ifndef c_mode_t_h_
#define c_mode_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned int // uint32_t
#  else
#    error
#  endif
#else
#  error
#endif
mode_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

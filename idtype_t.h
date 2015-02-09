#ifndef c_idtype_t_h_
#define c_idtype_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
int
#else
#  error
#endif
idtype_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

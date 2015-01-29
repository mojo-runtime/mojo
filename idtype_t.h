#ifndef _c__idtype_t_h
#define _c__idtype_t_h

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

#ifndef _c__gid_t_h
#define _c__gid_t_h

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
gid_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

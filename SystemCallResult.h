#ifndef _c__SystemCallResult_h
#define _c__SystemCallResult_h

#ifdef __cplusplus
inline namespace c {
#endif

#ifdef __linux__
#  ifdef __x86_64__
typedef unsigned long SystemCallResult;
#  else
#    error
#  endif
#else
#  error
#endif

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

#ifndef c_SystemResult_h_
#define c_SystemResult_h_

#ifdef __cplusplus
inline namespace c {
#endif

#ifdef __linux__
#  ifdef __x86_64__
typedef unsigned long SystemResult;
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

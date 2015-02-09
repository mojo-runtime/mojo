#ifndef c_SystemCallResult_h_
#define c_SystemCallResult_h_

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

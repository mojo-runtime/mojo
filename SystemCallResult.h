#ifndef c_SystemCallResult_h_
#define c_SystemCallResult_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#if defined(__linux__) && defined(__x86_64__)
unsigned long
#else
#  error
#endif
SystemCallResult;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

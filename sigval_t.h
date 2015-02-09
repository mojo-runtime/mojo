#ifndef c_sigval_t_h_
#define c_sigval_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef union
{
#ifdef __linux__
    // LINUX/include/uapi/asm-generic/siginfo.h
    int   sival_int;
    void* sival_ptr;
#else
#  error
#endif
}
sigval_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

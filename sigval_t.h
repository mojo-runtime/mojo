#ifndef _c__sigval_t_h
#define _c__sigval_t_h

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

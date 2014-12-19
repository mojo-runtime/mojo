#ifndef _c__ldiv_t_h
#define _c__ldiv_t_h

#ifdef __cplusplus
inline namespace c {
#endif

// Minimum (POSIX) definition

typedef struct
{
    long
    quot;

    long
    rem;
}
ldiv_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

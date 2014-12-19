#ifndef _c__lldiv_t_h
#define _c__lldiv_t_h

#ifdef __cplusplus
inline namespace c {
#endif

// Minimum (POSIX) definition

typedef struct
{
    long long
    quot;

    long long
    rem;
}
lldiv_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

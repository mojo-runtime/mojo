#ifndef c_lldiv_t_h_
#define c_lldiv_t_h_

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

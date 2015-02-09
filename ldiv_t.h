#ifndef c_ldiv_t_h_
#define c_ldiv_t_h_

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

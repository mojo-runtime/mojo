#ifndef c_div_t_h_
#define c_div_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

// Minimum (POSIX) definition

typedef struct
{
    int
    quot;

    int
    rem;
}
div_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

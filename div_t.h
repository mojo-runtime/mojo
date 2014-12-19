#ifndef _c__div_t_h
#define _c__div_t_h

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

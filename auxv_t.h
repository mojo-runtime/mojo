#ifndef c_auxv_t_h_
#define c_auxv_t_h_

#include "c/uint64_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

typedef struct
{
    int
    a_type;

    char
    [sizeof
    union
    {
        long
        a_val;

        void*
        a_ptr;

        void
        (*a_func)();
    }
    a_un;
}
Elf64_auxv_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

#ifndef c_auxv_t_h_
#define c_auxv_t_h_

#include "c/AuxiliaryVectorType.h"

#ifdef __cplusplus
inline namespace c {
#endif

typedef struct
{
    AuxiliaryVectorType
    a_type;

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
auxv_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

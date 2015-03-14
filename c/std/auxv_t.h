#pragma once

typedef struct
{
#if defined(__ELF__)
    int
    a_type __attribute__((__mode__(__word__)));

    union
    {
        long
        a_val;

        void*
        a_ptr;

        void
        (*a_fnc)();
    }
    a_un;
#else
#  error
#endif
}
auxv_t;

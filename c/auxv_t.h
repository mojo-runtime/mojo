#pragma once

#include "__Word.h"

typedef struct
{
    __Word
    a_type;

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
}
auxv_t;

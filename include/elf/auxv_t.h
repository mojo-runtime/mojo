#ifndef _elf_auxv_t_h_
#define _elf_auxv_t_h_

typedef struct
{
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
}
auxv_t;

#endif


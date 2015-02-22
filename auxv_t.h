#ifndef c_auxv_t_h_
#define c_auxv_t_h_

typedef struct
{
    int
    a_type;

#ifdef __x86_64__
    char
    _padding[4];
#else
#  error todo
#endif

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

#endif

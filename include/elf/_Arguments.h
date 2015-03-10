#ifndef _elf_Arguments_h_
#define _elf_Arguments_h_

typedef struct
{
    const unsigned int
    __argc __attribute__((__mode__(__word__)));

    const char*
    __argv[1]; // At least

    /*
    const char*
    envp[1]; // At least

    auxv_t
    auxv[1]; // At least
    */
}
_Arguments;

#endif

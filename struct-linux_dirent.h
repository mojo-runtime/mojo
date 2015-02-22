#ifndef c_struct_linux_dirent_h_
#define c_struct_linux_dirent_h_

#include "_internal/_c_namespace.h"

_c_namespace

struct linux_dirent
{
#ifdef __linux__
    unsigned long
    d_ino;

    unsigned long
    d_off;

    unsigned short
    d_reclen;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc99-extensions"
    char
    d_name[];
#pragma clang diagnostic pop

    /*
    char
    pad;

    char
    d_type;
    */
#else
#  error
#endif
};

_c_namespace_end

#endif

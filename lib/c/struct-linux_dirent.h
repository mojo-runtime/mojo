#pragma once

#if defined(__linux__)
#  include <feature/__flexible_array.h>

struct linux_dirent
{
    unsigned long
    d_ino;

    unsigned long
    d_off;

    unsigned short
    d_reclen;

    char
    __flexible_array(d_name);

    /*
    char
    pad;

    char
    d_type;
    */
};

#else
#  error
#endif

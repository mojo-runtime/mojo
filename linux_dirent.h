#ifndef c_linux_dirent_h_
#define c_linux_dirent_h_

#include "c/__c_namespace.h"

__c_namespace_open

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

__c_namespace_close

#endif

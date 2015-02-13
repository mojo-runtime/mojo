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

    char
    d_name[];

    /*
    char
    pad;

    DirectoryEntryKind (char)
    d_type;
    */
#else
#  error
#endif
};

__c_namespace_close

#endif

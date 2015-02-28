#ifndef c_linux_struct_linux_dirent_h_
#define c_linux_struct_linux_dirent_h_

struct linux_dirent
{
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
};

#endif

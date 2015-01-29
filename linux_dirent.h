#ifndef _c__linux_dirent_h
#define _c__linux_dirent_h

#ifdef __cplusplus
inline namespace c {
#endif

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

    _DirentType (char)
    d_type;
    */
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

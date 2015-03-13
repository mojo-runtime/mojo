#ifndef _c_struct_stat_h_
#define _c_struct_stat_h_

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "blksize_t.h"
#    include "blkcnt_t.h"
#    include "dev_t.h"
#    include "gid_t.h"
#    include "ino_t.h"
#    include "mode_t.h"
#    include "nlink_t.h"
#    include "off_t.h"
#    include "struct-timespec.h"
#    include "time_t.h"
#    include "uid_t.h"
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "blkcnt_t.h"
#  include "blksize_t.h"
#  include "fflags_t.h"
#  include "dev_t.h"
#  include "ino_t.h"
#  include "gid_t.h"
#  include "mode_t.h"
#  include "nlink_t.h"
#  include "off_t.h"
#  include "struct-timespec.h"
#  include "uid_t.h"
#  include "__static_cast.h"
#else
#  error
#endif

struct stat
{
#if defined(__linux__) && defined(__x86_64__)
    // Gleened from both glibc and linux sources, the best being
    // LINUX/arch/x86/include/uapi/asm/stat.h

    dev_t
    st_dev;

    ino_t
    st_ino;

    nlink_t
    st_nlink;

    mode_t
    st_mode;

    uid_t
    st_uid;

    gid_t
    st_gid;

    char
    __pad0[4];

    dev_t
    st_rdev;

    off_t
    st_size;

    blksize_t
    st_blksize;

    blkcnt_t
    st_blocks;

    struct timespec
    st_atim;

    struct timespec
    st_mtim;

    struct timespec
    st_ctim;

    #define st_atime st_atim.tv_sec
    #define st_mtime st_mtim.tv_sec
    #define st_ctime st_ctim.tv_sec

    char
    __unused[24];

#elif defined(__FreeBSD__)
    // @see sys/sys/stat.h
    dev_t
    st_dev;

    ino_t
    st_ino;

    mode_t
    st_mode;

    nlink_t
    st_nlink;

    uid_t
    st_uid;

    gid_t
    st_gid;

    dev_t
    st_rdev;

    struct timespec
    st_atim;

    struct timespec
    st_mtim;

    struct timespec
    st_ctim;

    off_t
    st_size;

    blkcnt_t
    st_blocks;

    blksize_t
    st_blksize;

    fflags_t
    st_flags;

    uint32_t
    st_gen;

    int32_t
    st_lspare;

    struct timespec
    st_birthtim;

    // Padding hacks
    unsigned int :(8 / 2) * (16 - __static_cast(int, sizeof(struct timespec)));
    unsigned int :(8 / 2) * (16 - __static_cast(int, sizeof(struct timespec)));
#else
#  error
#endif
};

#endif

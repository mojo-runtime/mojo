#ifndef c_linux_x86_64_struct_stat_h_
#define c_linux_x86_64_struct_stat_h_

#include "../../blksize_t.h"
#include "../../blkcnt_t.h"
#include "../../dev_t.h"
#include "../../gid_t.h"
#include "../../ino_t.h"
#include "../../mode_t.h"
#include "../../nlink_t.h"
#include "../../off_t.h"
#include "../../struct-timespec.h"
#include "../../time_t.h"
#include "../../uid_t.h"

_c_namespace

struct stat
{
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
};

_c_namespace_end

#endif

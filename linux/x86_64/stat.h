#ifndef c_linux__x86_64__stat_h_
#define c_linux__x86_64__stat_h_

#include "c/blksize_t.h"
#include "c/blkcnt_t.h"
#include "c/dev_t.h"
#include "c/gid_t.h"
#include "c/ino_t.h"
#include "c/mode_t.h"
#include "c/nlink_t.h"
#include "c/off_t.h"
#include "c/time_t.h"
#include "c/uid_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

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

    uint32_t // unsigned int
    __pad0;

    dev_t
    st_rdev;

    off_t
    st_size;

    blksize_t
    st_blksize;

    blkcnt_t
    st_blocks;

    // timespecs - could be unions, but
    // don't force that dependency, at least for now

    time_t
    st_atime;

    uint64_t
    st_atime_nsec;

    time_t
    st_mtime;

    uint64_t
    st_mtime_nsec;

    time_t
    st_ctime;

    uint64_t
    st_ctime_nsec;

    uint64_t
    __unused[3];
};

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif

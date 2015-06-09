#pragma once

#include "../types/blkcnt_t.h"
#include "../types/blksize_t.h"
#include "../types/dev_t.h"
#include "../types/gid_t.h"
#include "../types/ino_t.h"
#include "../types/mode_t.h"
#include "../types/off_t.h"
#include "../types/nlink_t.h"
#include "../time/struct-timespec.h" // [XSI]
#include "../types/uid_t.h"

struct stat
{
    // sys/sys/stat.h

    dev_t           st_dev;
    ino_t           st_ino;
    mode_t          st_mode;
    nlink_t         st_nlink;
    uid_t           st_uid;
    gid_t           st_gid;
    dev_t           st_rdev;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    off_t           st_size;
    blkcnt_t        st_blocks;
    blksize_t       st_blksize;
    uint32_t        st_flags; // fflags_t
    uint32_t        st_gen;
    int32_t         st_lspare;
    struct timespec st_birthtim;

    // Padding hacks
    unsigned int :(8 / 2) * (16 - ((int)sizeof(struct timespec)));
    unsigned int :(8 / 2) * (16 - ((int)sizeof(struct timespec)));
};

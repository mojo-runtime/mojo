#pragma once

#include "c/F_DUPFD.h"
#include "c/F_GETFD.h"
#include "c/F_GETFL.h"
#include "c/F_GETLK.h"
// F_RDLCK
#include "c/F_SETFD.h"
#include "c/F_SETFL.h"
#include "c/F_SETLK.h"
#include "c/F_SETLKW.h"
// F_UNLCK
// F_WRLCK
// FD_CLOEXEC
// O_ACCMODE
// O_APPEND
#include "c/O_CLOEXEC.h"
#include "c/O_CREAT.h"
#include "c/O_DIRECTORY.h"
// O_DSYNC [SIO]
// O_EXCL
// O_NOCTTY
// O_NONBLOCK
// O_RSYNC [SIO]
#include "c/O_RDONLY.h"
#include "c/O_RDWR.h"
// O_SYNC
// O_TRUNC
#include "c/O_WRONLY.h"
// POSIX_FADV_DONTNEED [XSI]
// POSIX_FADV_NOREUSE [XSI]
// POSIX_FADV_NORMAL [XSI]
// POSIX_FADV_RANDOM [XSI]
// POSIX_FADV_SEQUENTIAL [XSI]
// POSIX_FADV_WILLNEED [XSI]
#include "c/SEEK_CUR.h" // [XSI]
#include "c/SEEK_END.h" // [XSI]
#include "c/SEEK_SET.h" // [XSI]

//--------------------------------------------------------------------------------------------------
// Types

#include "c/mode_t.h"
#include "c/off_t.h"
#include "c/pid_t.h"
// struct flock

//--------------------------------------------------------------------------------------------------

// creat
// fcntl
// open
// posix_fadvise [ADV]
// posix_fallocate [ADV]

#pragma once

#include "F_DUPFD.h"
#include "F_GETFD.h"
#include "F_GETFL.h"
#include "F_GETLK.h"
// F_RDLCK
#include "F_SETFD.h"
#include "F_SETFL.h"
#include "F_SETLK.h"
#include "F_SETLKW.h"
// F_UNLCK
// F_WRLCK
// FD_CLOEXEC
// O_ACCMODE
// O_APPEND
#include "O_CLOEXEC.h"
#include "O_CREAT.h"
#include "O_DIRECTORY.h"
// O_DSYNC [SIO]
// O_EXCL
// O_NOCTTY
// O_NONBLOCK
// O_RSYNC [SIO]
#include "O_RDONLY.h"
#include "O_RDWR.h"
// O_SYNC
// O_TRUNC
#include "O_WRONLY.h"
// POSIX_FADV_DONTNEED [XSI]
// POSIX_FADV_NOREUSE [XSI]
// POSIX_FADV_NORMAL [XSI]
// POSIX_FADV_RANDOM [XSI]
// POSIX_FADV_SEQUENTIAL [XSI]
// POSIX_FADV_WILLNEED [XSI]
#include "SEEK_CUR.h" // [XSI]
#include "SEEK_END.h" // [XSI]
#include "SEEK_SET.h" // [XSI]

//--------------------------------------------------------------------------------------------------
// Types

#include "mode_t.h"
#include "off_t.h"
#include "pid_t.h"
// struct flock

//--------------------------------------------------------------------------------------------------

// creat
// fcntl
// open
// posix_fadvise [ADV]
// posix_fallocate [ADV]

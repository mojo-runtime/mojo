#pragma once

//--------------------------------------------------------------------------------------------------
// Constants

// _CS_PATH

// _CS_XBS5_ILP32_OFF32_CFLAGS
// _CS_XBS5_ILP32_OFF32_LDFLAGS
// _CS_XBS5_ILP32_OFF32_LIBS
// _CS_XBS5_ILP32_OFF32_LINTFLAGS
// _CS_XBS5_ILP32_OFFBIG_CFLAGS
// _CS_XBS5_ILP32_OFFBIG_LDFLAGS
// _CS_XBS5_ILP32_OFFBIG_LIBS
// _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
// _CS_XBS5_LP64_OFF64_CFLAGS
// _CS_XBS5_LP64_OFF64_LDFLAGS
// _CS_XBS5_LP64_OFF64_LIBS
// _CS_XBS5_LP64_OFF64_LINTFLAGS
// _CS_XBS5_LPBIG_OFFBIG_CFLAGS
// _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
// _CS_XBS5_LPBIG_OFFBIG_LIBS
// _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS

// _PC_ASYNC_IO
// _PC_CHOWN_RESTRICTED
// _PC_FILESIZEBITS
// _PC_LINK_MAX
// _PC_MAX_CANON
// _PC_MAX_INPUT
// _PC_NAME_MAX
// _PC_NO_TRUNC
// _PC_PATH_MAX
// _PC_PIPE_BUF
// _PC_PRIO_IO
// _PC_SYNC_IO
// _PC_VDISABLE

// _POSIX_ASYNC_IO
// _POSIX_ASYNCHRONOUS_IO
// _POSIX_CHOWN_RESTRICTED
// _POSIX_FSYNC
// _POSIX_JOB_CONTROL
// _POSIX_MAPPED_FILES
// _POSIX_MEMLOCK
// _POSIX_MEMLOCK_RANGE
// _POSIX_MEMORY_PROTECTION
// _POSIX_MESSAGE_PASSING
// _POSIX_NO_TRUNC
// _POSIX_PRIO_IO
// _POSIX_PRIORITIZED_IO
// _POSIX_PRIORITY_SCHEDULING
// _POSIX_REALTIME_SIGNALS
// _POSIX_SAVED_IDS
// _POSIX_SEMAPHORES
// _POSIX_SHARED_MEMORY_OBJECTS
// _POSIX_SYNC_IO
// _POSIX_SYNCHRONIZED_IO
// _POSIX_THREADS
// _POSIX_THREAD_ATTR_STACKADDR
// _POSIX_THREAD_ATTR_STACKSIZE
// _POSIX_THREAD_PRIO_INHERIT
// _POSIX_THREAD_PRIO_PROTECTED
// _POSIX_THREAD_PRIORITY_SCHEDULING
// _POSIX_THREAD_PROCESS_SHARED
// _POSIX_THREAD_SAFE_FUNCTIONS
// _POSIX_TIMERS
// _POSIX_VDISABLE
// _POSIX_VERSION

// _POSIX2_C_BIND
// _POSIX2_C_DEV
// _POSIX2_C_VERSION
// _POSIX2_CHAR_TERM
// _POSIX2_FORT_DEV
// _POSIX2_LOCALEDEF
// _POSIX2_SW_DEV
// _POSIX2_UPE
// _POSIX2_VERSION

// _SC_…

// _XBS5_ILP32_OFF32
// _XBS5_ILP32_OFFBIG
// _XBS5_LP64_OFF64
// _XBS5_LPBIG_OFFBIG

// _XOPEN_ENH_I18N
// _XOPEN_LEGACY
// _XOPEN_REALTIME
// _XOPEN_REALTIME_THREADS
// _XOPEN_VERSION


// F_OK
// F_LOCK
// F_TEST
// F_TLOCK
// F_ULOCK
// R_OK

#include "SEEK_CUR.h"
#include "SEEK_END.h"
#include "SEEK_SET.h"

#include "STDERR_FILENO.h"
#include "STDIN_FILENO.h"
#include "STDOUT_FILENO.h"

// W_OK
// X_OK

//--------------------------------------------------------------------------------------------------
// Types

//--------------------------------------------------------------------------------------------------
// Functions

// access
// alarm
// brk
// chdir
// chroot (LEGACY)
// chown
// close
// confstr
// crypt
// ctermid
// cuserid (LEGACY)
// dup
// dup2
// encrypt
// execl
// execle
// execlp
// execv
// execve
// execvp
// exit
// fchown
// fchdir
// fdatasync
// fork
// fpathconf
// fsync
// ftruncate
// getcwd
// getdtablesize (LEGACY)
// getegid
// geteuid
// getgid
// getgroups
// gethostid
// getlogin
// getlogin_r
// getopt
// getpagesize (LEGACY)
// getpass (LEGACY)
// getpgid
// getpgrp
// getpid
// getppid
// getsid
// getuid
// getwd
// isatty
// lchown
// link
// lockf
// lseek
// nice
// pathconf
// pause
// pipe
// pread
// pthread_atfork
// pwrite
// read
// readlink
// rmdir
// sbrk
// setgid
// setpgid
// setpgrp
// setregid
// setreuid
// setsid
// setuid
// sleep
// swab
// symlink
// sync
// sysconf
// tcgetpgrp
// tcsetpgrp
// truncate
// ttyname
// ttyname_r
// ualarm
// unlink
// usleep
// vfork
// write

//--------------------------------------------------------------------------------------------------
// Variables

// optarg
// optind
// opterr
// optopt

//--------------------------------------------------------------------------------------------------
// Duplicates

#include <std/NULL.h>
#include <std/intptr_t.h>
#include "gid_t.h"
#include "off_t.h"
#include "pid_t.h"
#include <std/size_t.h>
#include <std/ssize_t.h> // FIXME: not standard
#include "uid_t.h"
#include "useconds_t.h"

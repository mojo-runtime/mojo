#pragma once

#include "c/SYS_chdir.h"
#include "c/SYS_chmod.h"
#include "c/SYS_chown.h"
#include "c/SYS_clock_getres.h"
#include "c/SYS_clock_gettime.h"
#if defined(__linux__)
#  include "c/SYS_clock_nanosleep.h"
#endif
#include "c/SYS_clock_settime.h"
#if defined(__linux__)
#  include "c/SYS_clone.h"
#endif
#include "c/SYS_close.h"
#include "c/SYS_dup.h"
#include "c/SYS_dup2.h"
#if defined(__linux__)
#  include "c/SYS_dup3.h"
#  include "c/SYS_epoll_create1.h"
#  include "c/SYS_epoll_ctl.h"
#  include "c/SYS_epoll_wait.h"
#endif
#include "c/SYS_execve.h"
#include "c/SYS_exit.h"
#if defined(__linux__)
#  include "c/SYS_exit_group.h"
#endif
#include "c/SYS_fchdir.h"
#include "c/SYS_fcntl.h"
#include "c/SYS_fork.h"
#include "c/SYS_fstat.h"
#include "c/SYS_fstatat.h"
#if defined(__linux__)
#  include "c/SYS_get_thread_area.h"
#  include "c/SYS_getcwd.h"
#endif
#include "c/SYS_getdents.h"
#if defined(__linux__)
#  include "c/SYS_getdents64.h"
#endif
#include "c/SYS_getegid.h"
#include "c/SYS_geteuid.h"
#include "c/SYS_getgid.h"
#include "c/SYS_getpgid.h"
#include "c/SYS_getpid.h"
#include "c/SYS_getppid.h"
#if defined(__linux__)
#  include "c/SYS_gettid.h"
#endif
#include "c/SYS_getuid.h"
#if defined(__linux__)
#  include "c/SYS_inotify_add_watch.h"
#  include "c/SYS_inotify_init1.h"
#  include "c/SYS_inotify_rm_watch.h"
#endif
#include "c/SYS_ioctl.h"
#include "c/SYS_kill.h"
#include "c/SYS_mkdir.h"
#include "c/SYS_mmap.h"
#if defined(__linux__)
#  include "c/SYS_mremap.h"
#endif
#include "c/SYS_munmap.h"
#include "c/SYS_open.h"
#if defined(__linux__)
#  include "c/SYS_pause.h"
#endif
#include "c/SYS_pipe2.h"
#include "c/SYS_read.h"
#include "c/SYS_readlink.h"
#include "c/SYS_rmdir.h"
#if defined(__linux__)
#  include "c/SYS_set_thread_area.h"
#endif
#include "c/SYS_stat.h"
#include "c/SYS_symlink.h"
#if defined(__linux__)
#  include "c/SYS_tgkill.h"
#  include "c/SYS_uname.h"
#endif
#include "c/SYS_unlink.h"
#include "c/SYS_vfork.h"
#if defined(__linux__)
#  include "c/SYS_waitid.h"
#endif
#include "c/SYS_write.h"

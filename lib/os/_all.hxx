#pragma once

#include "chdir.hxx"
#include "chmod.hxx"
#include "chown.hxx"
#include "clock_getres.hxx"
#include "clock_gettime.hxx"
#if defined(__linux__)
#  include "clock_nanosleep.hxx"
#endif
#include "clock_settime.hxx"
#include "close.hxx"
#if defined(__linux__)
#  include "dup3.hxx"
#  include "epoll_create1.hxx"
#  include "epoll_ctl.hxx"
#  include "epoll_wait.hxx"
#endif
#include "execve.hxx"
#include "fchdir.hxx"
#include "fcntl.hxx"
#include "fork.hxx"
#include "fstat.hxx"
#include "fstatat.hxx"
#if defined(__linux__)
#  include "getcwd.hxx"
#  include "getdents.hxx"
#  include "inotify_add_watch.hxx"
#  include "inotify_init1.hxx"
#  include "inotify_rm_watch.hxx"
#endif
#include "ioctl.hxx"
#include "kill.hxx"
#include "mkdir.hxx"
#include "mmap.hxx"
#if defined(__linux__)
#  include "mremap.hxx"
#endif
#include "munmap.hxx"
#include "open.hxx"
#include "pipe2.hxx"
#include "read.hxx"
#include "readlink.hxx"
#include "rmdir.hxx"
#include "stat.hxx"
#include "symlink.hxx"
#if defined(__linux__)
#  include "tgkill.hxx"
#  include "uname.hxx"
#endif
#include "unlink.hxx"
#if defined(__linux__) && defined(__x86_64__) // TODO: siginfo_t
#  include "waitid.hxx"
#endif
#include "write.hxx"

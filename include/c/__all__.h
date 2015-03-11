#if defined(__ELF__)
#  include "AT_BASE.h"
#  if defined(__linux__)
#    include "AT_BASE_PLATFORM.h"
#    include "AT_CLKTCK.h"
#  endif
#  include "AT_EGID.h"
#  include "AT_ENTRY.h"
#  include "AT_EUID.h"
#  include "AT_EXECFD.h"
#  if defined(__linux__)
#    include "AT_EXECFN.h"
#  endif
#  include "AT_FLAGS.h"
#  include "AT_GID.h"
#  if defined(__linux__)
#    include "AT_HWCAP.h"
#    include "AT_HWCAP2.h"
#  endif
#  include "AT_IGNORE.h"
#  include "AT_NOTELF.h"
#  include "AT_NULL.h"
#  include "AT_PAGESZ.h"
#  include "AT_PHDR.h"
#  include "AT_PHENT.h"
#  include "AT_PHNUM.h"
#  if defined(__linux__)
#    include "AT_PLATFORM.h"
#    include "AT_RANDOM.h"
#    include "AT_SECURE.h"
#  endif
#  include "AT_UID.h"
#endif

#if defined(__unix__)
#  include "CLD_CONTINUED.h"
#  include "CLD_DUMPED.h"
#  include "CLD_EXITED.h"
#  include "CLD_KILLED.h"
#  include "CLD_STOPPED.h"
#  include "CLD_TRAPPED.h"
#endif

#if defined(__unix__)
#  include "CLOCK_REALTIME.h"
#endif

#if defined(__unix__)
#  include "DT_BLK.h"
#  include "DT_CHR.h"
#  include "DT_DIR.h"
#  include "DT_FIFO.h"
#  include "DT_LNK.h"
#  include "DT_REG.h"
#  include "DT_SOCK.h"
#  include "DT_UNKNOWN.h"
#endif

#if defined(__unix__)
#  include "E2BIG.h"
#  include "EACCES.h"
#  include "EAGAIN.h"
#  include "EBADF.h"
#  include "EBUSY.h"
#  include "ECHILD.h"
#  include "EDEADLK.h"
#  include "EDESTADDRREQ.h"
#endif
#include "EDOM.h"
#if defined(__unix__)
#  include "EDQUOT.h"
#  include "EEXIST.h"
#  include "EFAULT.h"
#  include "EFBIG.h"
#endif
#include "EILSEQ.h"
#if defined(__unix__)
#  include "EINTR.h"
#  include "EIO.h"
#  include "EISDIR.h"
#  if defined(__linux__)
#    include "ELIBBAD.h"
#  endif
#  include "ELOOP.h"
#  include "EMFILE.h"
#  include "EMLINK.h"
#  include "ENAMETOOLONG.h"
#  include "ENFILE.h"
#  include "ENODEV.h"
#  include "ENOENT.h"
#  include "ENOEXEC.h"
#  include "ENOLCK.h"
#  include "ENOMEM.h"
#  include "ENOSPC.h"
#  include "ENOSYS.h"
#  include "ENOTBLK.h"
#  include "ENOTDIR.h"
#  include "ENOTEMPTY.h"
#  include "ENOTTY.h"
#  include "ENXIO.h"
#  include "EOPNOTSUPP.h"
#  include "EOVERFLOW.h"
#  include "EPERM.h"
#endif
#include "ERANGE.h"
#if defined(__unix__)
#  include "EROFS.h"
#  include "ESPIPE.h"
#  include "ESRCH.h"
#  include "ETXTBSY.h"
#  include "EWOULDBLOCK.h"
#  include "EXDEV.h"
#endif

#if defined(__linux__)
#  include "EPOLLERR.h"
#  include "EPOLLET.h"
#  include "EPOLLHUP.h"
#  include "EPOLLIN.h"
#  include "EPOLLONESHOT.h"
#  include "EPOLLOUT.h"
#  include "EPOLLPRI.h"
#  include "EPOLLWAKEUP.h"
#  include "EPOLL_CLOEXEC.h"
#  include "EPOLL_CTL_ADD.h"
#  include "EPOLL_CTL_DEL.h"
#  include "EPOLL_CTL_MOD.h"
#endif

#include "EXIT_FAILURE.h"
#include "EXIT_SUCCESS.h"

#if defined(__unix__)
#  include "F_DUPFD.h"
#  include "F_GETFD.h"
#  include "F_GETFL.h"
#  include "F_GETLK.h"
#  include "F_SETFD.h"
#  include "F_SETFL.h"
#  include "F_SETLK.h"
#  include "F_SETLKW.h"
#endif

#include "INT8_C.h"
#include "INT16_C.h"
#include "INT32_C.h"
#include "INT64_C.h"

#include "INT8_MAX.h"
#include "INT16_MAX.h"
#include "INT32_MAX.h"
#include "INT64_MAX.h"

#include "INT8_MIN.h"
#include "INT16_MIN.h"
#include "INT32_MIN.h"
#include "INT64_MIN.h"

#include "INTMAX_MAX.h"
#include "INTMAX_MIN.h"

#include "INTPTR_MAX.h"
#include "INTPTR_MIN.h"

#include "INT_FAST8_MAX.h"
#include "INT_FAST16_MAX.h"
#include "INT_FAST32_MAX.h"
#include "INT_FAST64_MAX.h"

#include "INT_FAST8_MIN.h"
#include "INT_FAST16_MIN.h"
#include "INT_FAST32_MIN.h"
#include "INT_FAST64_MIN.h"

#include "INT_LEAST8_MAX.h"
#include "INT_LEAST16_MAX.h"
#include "INT_LEAST32_MAX.h"
#include "INT_LEAST64_MAX.h"

#include "INT_LEAST8_MIN.h"
#include "INT_LEAST16_MIN.h"
#include "INT_LEAST32_MIN.h"
#include "INT_LEAST64_MIN.h"

#include "INT_MAX.h"

#if defined(__unix__)
#  include "MAP_ANONYMOUS.h"
// MAP_DENYWRITE: linux, ignored
#  include "MAP_PRIVATE.h"
#  include "MAP_SHARED.h"
#endif

#if defined(__unix__)
#  include "NAME_MAX.h"
#endif

#if defined(__unix__)
#  include "NCCS.h"
#endif

#include "NULL.h"

#if defined(__unix__)
#  include "O_CLOEXEC.h"
#  include "O_CREAT.h"
#  include "O_DIRECTORY.h"
#  include "O_RDONLY.h"
#  include "O_RDWR.h"
#  include "O_WRONLY.h"
#endif

#if defined(__unix__)
#  include "PATH_MAX.h"
#endif

#if defined(__unix__)
#  include "POLLERR.h"
#  include "POLLHUP.h"
#  include "POLLIN.h"
#  include "POLLOUT.h"
#  include "POLLPRI.h"
#endif

#if defined(__unix__)
#  include "PROT_EXEC.h"
#  include "PROT_NONE.h"
#  include "PROT_READ.h"
#  include "PROT_WRITE.h"
#endif

#include "PTRDIFF_MAX.h"
#include "PTRDIFF_MIN.h"

#include "RAND_MAX.h"

#include "SIGABRT.h"
#if defined(__unix__)
#  include "SIGALRM.h"
#  include "SIGCHLD.h"
#endif
#include "SIGFPE.h"
#if defined(__unix__)
#  include "SIGHUP.h"
#endif
#include "SIGILL.h"
#include "SIGINT.h"
#if defined(__unix__)
#  include "SIGKILL.h"
#  include "SIGPIPE.h"
#  include "SIGQUIT.h"
#endif
#include "SIGSEGV.h"
#include "SIGTERM.h"
#if defined(__unix__)
#  include "SIGTRAP.h"
#endif

#include "SIG_ATOMIC_MAX.h"
#include "SIG_ATOMIC_MIN.h"

#include "SIG_DFL.h"
#include "SIG_ERR.h"
#include "SIG_IGN.h"

#include "SIZE_MAX.h"

#if defined(__unix__)
#  include "STDERR_FILENO.h"
#  include "STDIN_FILENO.h"
#  include "STDOUT_FILENO.h"
#endif

#if defined(__unix__)
#  include "SYS_chdir.h"
#  include "SYS_chmod.h"
#  include "SYS_chown.h"
#  include "SYS_clock_getres.h"
#  include "SYS_clock_gettime.h"
#  if defined(__linux__)
#    include "SYS_clock_nanosleep.h"
#  endif
#  include "SYS_clock_settime.h"
#  if defined(__linux__)
#    include "SYS_clone.h"
#  endif
#  include "SYS_close.h"
#  include "SYS_dup.h"
#  include "SYS_dup2.h"
#  if defined(__linux__)
#    include "SYS_dup3.h"
#    include "SYS_epoll_create1.h"
#    include "SYS_epoll_ctl.h"
#    include "SYS_epoll_wait.h"
#  endif
#  include "SYS_execve.h"
#  include "SYS_exit.h"
#  if defined(__linux__)
#    include "SYS_exit_group.h"
#  endif
#  include "SYS_fchdir.h"
#  include "SYS_fcntl.h"
#  include "SYS_fork.h"
#  include "SYS_fstat.h"
#  include "SYS_fstatat.h"
#  if defined(__linux__)
#    include "SYS_get_thread_area.h"
#    include "SYS_getcwd.h"
#  endif
#  include "SYS_getdents.h"
#  include "SYS_getegid.h"
#  include "SYS_geteuid.h"
#  include "SYS_getgid.h"
#  include "SYS_getpid.h"
#  include "SYS_getppid.h"
#  if defined(__linux__)
#    include "SYS_gettid.h"
#  endif
#  include "SYS_getuid.h"
#  if defined(__linux__)
#    include "SYS_inotify_add_watch.h"
#    include "SYS_inotify_init1.h"
#    include "SYS_inotify_rm_watch.h"
#  endif
#  include "SYS_ioctl.h"
#  include "SYS_kill.h"
#  include "SYS_mkdir.h"
#  include "SYS_mmap.h"
#  if defined(__linux__)
#    include "SYS_mremap.h"
#  endif
#  include "SYS_munmap.h"
#  include "SYS_open.h"
#  if defined(__linux__)
#    include "SYS_pause.h"
#  endif
#  include "SYS_pipe2.h"
#  include "SYS_read.h"
#  include "SYS_readlink.h"
#  include "SYS_rmdir.h"
#  if defined(__linux__)
#    include "SYS_set_thread_area.h"
#  endif
#  include "SYS_stat.h"
#  include "SYS_symlink.h"
#  if defined(__linux__)
#    include "SYS_tgkill.h"
#    include "SYS_uname.h"
#  endif
#  include "SYS_unlink.h"
#  include "SYS_vfork.h"
#  if defined(__linux__)
#    include "SYS_waitid.h"
#  endif
#  include "SYS_write.h"
#endif

#if defined(__unix__)
#  include "TCGETS.h"
#  include "TCSETS.h"
#  include "TCSETS.h"
#  include "TCSETSW.h"
#endif

#include "UINT8_C.h"
#include "UINT16_C.h"
#include "UINT32_C.h"
#include "UINT64_C.h"

#include "UINT8_MAX.h"
#include "UINT16_MAX.h"
#include "UINT32_MAX.h"
#include "UINT64_MAX.h"

#include "UINTMAX_MAX.h"

#include "UINTPTR_MAX.h"

#include "UINT_FAST8_MAX.h"
#include "UINT_FAST16_MAX.h"
#include "UINT_FAST32_MAX.h"
#include "UINT_FAST64_MAX.h"

#include "UINT_LEAST8_MAX.h"
#include "UINT_LEAST16_MAX.h"
#include "UINT_LEAST32_MAX.h"
#include "UINT_LEAST64_MAX.h"

#include "WCHAR_MAX.h"
#include "WCHAR_MIN.h"

#include "WINT_MAX.h"
#include "WINT_MIN.h"

#if defined(__unix__)
#  include "WCONTINUED.h"
#  include "WEXITED.h"
#  include "WNOHANG.h"
#  include "WNOWAIT.h"
#  include "WSTOPPED.h"
#  include "WUNTRACED.h"
#endif

#include "abs.h"
#include "alignas.h"
#include "alignof.h"
#include "alloca.h"
#include "assert.h"

#if defined(__ELF__)
#  include "auxv_t.h"
#endif

#if defined(__unix__)
#  include "blkcnt_t.h"
#  include "blksize_t.h"
#endif

#include "bool.h"

#if defined(__unix__)
#  include "cc_t.h"
#endif

#include "char16_t.h"
#include "char32_t.h"

#if defined(__unix__)
#  include "clock_t.h"
#  include "clockid_t.h"
#  include "dev_t.h"
#endif

#include "div_t.h"

#if defined(__linux__)
#  include "epoll_data_t.h"
#endif

#include "errno_t.h"
#include "false.h"

#if defined(__unix__)
#  include "gid_t.h"
#  include "id_t.h"
#  include "idtype_t.h"
#  include "ino_t.h"
#endif

#include "int8_t.h"
#include "int16_t.h"
#include "int32_t.h"
#include "int64_t.h"
#include "int_fast8_t.h"
#include "int_fast16_t.h"
#include "int_fast32_t.h"
#include "int_fast64_t.h"
#include "int_least8_t.h"
#include "int_least16_t.h"
#include "int_least32_t.h"
#include "int_least64_t.h"
#include "intmax_t.h"
#include "intptr_t.h"
#include "ldiv_t.h"
#include "lldiv_t.h"
#include "memcmp.h"
#include "memcpy.h"
#include "memset.h"

#if defined(__unix__)
#  include "mode_t.h"
#  include "nlink_t.h"
#endif

#include "noreturn.h"

#if defined(__unix__)
#  include "off_t.h"
#endif

#include "offsetof.h"

#if defined(__unix__)
#  include "pid_t.h"
#endif

#include "ptrdiff_t.h"
#include "sighandler_t.h"
#include "size_t.h"

#if defined(__unix__)
#  include "speed_t.h"
#endif

#include "ssize_t.h"
#include "static_assert.h"
#include "strcmp.h"
#include "strlen.h"

#if defined(__linux__)
#  include "struct-epoll_event.h"
#  include "struct-linux_dirent.h"
#  include "struct-pt_regs.h"
#endif

#if defined(__unix__)
#  include "struct-stat.h"
#  include "struct-termios.h"
#  include "struct-timespec.h"
#  include "struct-timeval.h"
#  include "struct-utsname.h"
#  include "suseconds_t.h"
#  include "tcflag_t.h"
#endif

#include "true.h"

#if defined(__unix__)
#  include "uid_t.h"
#endif

#include "uint8_t.h"
#include "uint16_t.h"
#include "uint32_t.h"
#include "uint64_t.h"

#include "uint_fast8_t.h"
#include "uint_fast16_t.h"
#include "uint_fast32_t.h"
#include "uint_fast64_t.h"

#include "uint_least8_t.h"
#include "uint_least16_t.h"
#include "uint_least32_t.h"
#include "uint_least64_t.h"

#include "uintmax_t.h"
#include "uintptr_t.h"

#if defined(__unix__)
#  include "union-sigval.h"
#endif

#include "wchar_t.h"
#include "wint_t.h"

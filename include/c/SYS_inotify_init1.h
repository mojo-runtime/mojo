#ifndef SYS_inotify_init1

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_inotify_init1 294
#  else
#    error
#  endif
#else
#  error
#endif

#endif

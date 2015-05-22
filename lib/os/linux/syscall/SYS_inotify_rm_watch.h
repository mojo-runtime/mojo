#pragma once

#if defined(__arm__)
#  define SYS_inotify_rm_watch 318
#elif defined(__x86_64__)
#  define SYS_inotify_rm_watch 255
#else
#  error
#endif

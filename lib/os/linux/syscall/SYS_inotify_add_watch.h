#pragma once

#if defined(__arm__)
#  define SYS_inotify_add_watch 317
#elif defined(__x86_64__)
#  define SYS_inotify_add_watch 254
#else
#  error
#endif

#pragma once

#if defined(__arm__)
#  define SYS_inotify_init1 360
#elif defined(__x86_64__)
#  define SYS_inotify_init1 294
#else
#  error
#endif

#pragma once

#if defined(__arm__)
#  define __NR_inotify_add_watch 317
#elif defined(__x86_64__)
#  define __NR_inotify_add_watch 254
#else
#  error
#endif

#error

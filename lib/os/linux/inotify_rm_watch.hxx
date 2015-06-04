#pragma once

#if defined(__arm__)
#  define __NR_inotify_rm_watch 318
#elif defined(__x86_64__)
#  define __NR_inotify_rm_watch 255
#else
#  error
#endif

#error

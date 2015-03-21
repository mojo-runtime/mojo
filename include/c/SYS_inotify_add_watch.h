// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_inotify_add_watch 254
#  else
#    error
#  endif
#else
#  error
#endif

// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_inotify_rm_watch 255
#  else
#    error
#  endif
#else
#  error
#endif

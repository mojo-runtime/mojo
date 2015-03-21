// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_set_thread_area 205
#  else
#    error
#  endif
#else
#  error
#endif

// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_get_thread_area 211
#  else
#    error
#  endif
#else
#  error
#endif

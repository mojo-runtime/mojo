// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENETUNREACH 101
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENETUNREACH 51
#else
#  error
#endif

// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOTSOCK 88
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOTSOCK 38
#else
#  error
#endif

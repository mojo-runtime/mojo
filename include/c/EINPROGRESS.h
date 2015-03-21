// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EINPROGRESS 115
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EINPROGRESS 36
#else
#  error
#endif

// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define F_GETLK 5
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define F_GETLK 11
#else
#  error
#endif

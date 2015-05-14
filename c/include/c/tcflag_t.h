#pragma once

#if defined(__linux__)
#  if defined(__sparc__) && !defined(__arch64__)
typedef unsigned long tcflag_t;
#  else
typedef unsigned int tcflag_t;
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
typedef unsigned int tcflag_t;
#  else
#    error
#  endif
#else
#  error
#endif

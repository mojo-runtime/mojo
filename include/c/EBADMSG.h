// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define EBADMSG 74
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EBADMSG 89
#else
#  error
#endif

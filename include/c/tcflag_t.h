// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "uint32_t.h"
//   @see include/uapi/asm-generic/termbits.h
     typedef uint32_t /* unsigned int */ tcflag_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    include "uint32_t.h"
//   @see sys/_termios.h
     typedef uint32_t /* unsigned int */ tcflag_t;
#  else
#    error
#  endif
#else
#  error
#endif

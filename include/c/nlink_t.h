// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "uint32_t.h"
//   @see include/linux/types.h"
     typedef uint32_t nlink_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "uint16_t.h"
// @see sys/sys/_types.h
   typedef uint16_t nlink_t;
#else
#  error
#endif

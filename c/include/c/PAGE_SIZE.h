#pragma once

#if defined(__linux__)
#  include "PAGE_SHIFT.h"
#  define PAGE_SIZE (1UL << PAGE_SHIFT)
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    include "PAGE_SHIFT.h"
#    define PAGE_SIZE (1 << PAGE_SHIFT)
#  else
#    error
#  endif
#else
#  error
#endif

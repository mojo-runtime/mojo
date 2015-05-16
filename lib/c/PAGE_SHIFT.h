#pragma once

#if defined(__arm__)
#  if defined(__FreeBSD__) || defined(__linux__)
#    define PAGE_SHIFT 12
#  else
#    error
#  endif
#elif defined(__x86_64__)
#  if defined(__FreeBSD__) || defined(__linux__)
#    define PAGE_SHIFT 12
#  else
#    error
#  endif
#else
#  error
#endif

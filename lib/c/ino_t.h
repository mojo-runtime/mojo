#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__s390x__)
typedef unsigned int ino_t;
#  elif defined(__i386__)
typedef /* __kernel_ulong_t */ unsigned long long ino_t;
#  else
typedef /* __kernel_ulong_t */ unsigned long ino_t;
#  endif
#elif defined(__FreeBSD__)
#  include "uint32_t.h"
typedef uint32_t ino_t;
#else
#  error
#endif

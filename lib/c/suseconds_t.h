#pragma once

#if defined(__linux__)
#  if defined(__i386__)
typedef /* __kernel_long_t */ long long suseconds_t;
#  else
typedef /* __kernel_long_t */ long suseconds_t;
#  endif
#elif defined(__FreeBSD__)
typedef long suseconds_t;
#else
#  error
#endif

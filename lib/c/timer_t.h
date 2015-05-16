#pragma once

#if defined(__linux__)
typedef int timer_t;
#elif defined(__FreeBSD__)
typedef struct __timer *timer_t;
#else
#  error
#endif

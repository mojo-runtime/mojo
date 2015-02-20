#ifndef c_SYS_set_thread_area_h_
#define c_SYS_set_thread_area_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(set_thread_area, 205);
#else
#  error
#endif

#endif

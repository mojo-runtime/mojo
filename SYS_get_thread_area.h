#ifndef c_SYS_get_thread_area_h_
#define c_SYS_get_thread_area_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(get_thread_area, 211);
#else
#  error
#endif

#endif

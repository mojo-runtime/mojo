#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_waitid 247
#  else
#    error
#  endif
#else
#  error
#endif

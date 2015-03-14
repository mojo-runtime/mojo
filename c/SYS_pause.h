#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_pause 34
#  else
#    error
#  endif
#else
#  error
#endif

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_dup3 292
#  elif defined(__arm__)
#    define SYS_dup3 358
#  else
#    error
#  endif
#else
#  error
#endif

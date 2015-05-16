#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getcwd 79
#  elif defined(__arm__)
#    define SYS_getcwd 183
#  else
#    error
#  endif
#else
#  error
#endif

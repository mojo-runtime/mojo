#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_gettid 186
#  elif defined(__arm__)
#    define SYS_gettid 224
#  else
#    error
#  endif
#else
#  error
#endif

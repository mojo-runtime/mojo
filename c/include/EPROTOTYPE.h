#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EPROTOTYPE 91
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EPROTOTYPE 41
#else
#  error
#endif

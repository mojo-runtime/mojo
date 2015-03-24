#pragma once

#if defined(__has_attribute)
#  if __has_attribute(__mode__)
typedef unsigned int __Byte __attribute__((__mode__(__byte__)));
#  else
#    error
#  endif
#elif defined(__GNUC__)
typedef unsigned int __Byte __attribute__((__mode__(__byte__)));
#else
#  error
#endif

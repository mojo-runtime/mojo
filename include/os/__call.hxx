#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "_linux_/_x86_64_/__call.hxx"
#  else
#    error
#  endif
#else
#  error
#endif

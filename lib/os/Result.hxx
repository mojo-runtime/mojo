#pragma once

#if defined(__FreeBSD__)
#  include "freebsd/Result.hxx"
#elif defined(__linux__)
#  include "linux/Result.hxx"
#else
#  error
#endif

#pragma once

#if defined(__unix__)
#  include "_posix/stdin.hxx"
#else
#  error
#endif

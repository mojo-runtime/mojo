// -*- C -*-

#pragma once

// Note that `__has_builtin(__builtin_offsetof)` does not seem to apply.

#if defined(__GNUC__)
#  define offsetof(T, member) __builtin_offsetof(T, member)
#else
#  error
#endif

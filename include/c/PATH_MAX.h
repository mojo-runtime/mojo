// -*- C -*-

#pragma once

#if defined(__linux__)
#  define PATH_MAX 4096
#elif defined(__FreeBSD__)
#  define PATH_MAX 1024
#else
#  error
#endif

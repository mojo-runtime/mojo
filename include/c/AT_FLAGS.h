// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_FLAGS 8
#else
#  error
#endif

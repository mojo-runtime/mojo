// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_NOTELF 10
#else
#  error
#endif

// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_IGNORE 1
#else
#  error
#endif

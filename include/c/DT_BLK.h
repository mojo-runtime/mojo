// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_BLK 6
#else
#  error
#endif

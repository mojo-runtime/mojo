// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLD_DUMPED 3
#else
#  error
#endif

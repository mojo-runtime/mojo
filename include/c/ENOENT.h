// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOENT 2
#else
#  error
#endif

// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGABRT 6
#else
#  error
#endif

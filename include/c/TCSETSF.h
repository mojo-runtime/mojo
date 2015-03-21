// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
// XXX: FreeBSD calls this `LINUX_TCSETSF`
#  define TCSETSF 0x5404
#else
#  error
#endif

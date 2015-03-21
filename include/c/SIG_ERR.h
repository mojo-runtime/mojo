// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIG_ERR ((void (*)(int))-1)
#else
#  error
#endif

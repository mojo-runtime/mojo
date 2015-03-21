// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define PROT_EXEC 4
#else
#  error
#endif

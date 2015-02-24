#ifndef _stdlib_h_
#define _stdlib_h_

// Per: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdlib.h.html

// ...shall define the following macros:

#include "EXIT_FAILURE.h"
#include "EXIT_SUCCESS.h"
#include "NULL.h"
#include "RAND_MAX.h"
#include "MB_CUR_MAX.h"

// ...shall be defined through typedef:

#include "div_t.h"
#include "ldiv_t.h"
#include "lldiv_t.h"
#include "size_t.h"
#include "wchar_t.h"

// ...the following symbolic names and macros shall be defined as in <sys/wait.h>:

#if 0 // XSI
#  include "WNOHANG.h"
#  include "WUNTRACED.h"
#  include "WEXITSTATUS.h"
#  include "WIFEXITED.h"
#  include "WIFSIGNALED.h"
#  include "WIFSTOPPED.h"
#  include "WSTOPSIG.h"
#  include "WTERMSIG.h"
#endif

// ...shall be declared as functions and may also be defined as macros.
// Function prototypes shall be provided.

#include "_Exit.h"

#if 0 // XSI
#  include "a64l.h"
#endif

#include "abort.h"
#include "abs.h"
#include "atexit.h"
#include "atof.h"
#include "atoi.h"
#include "aol.h"
#include "atoll.h"
#include "bsearch.h"
#include "calloc.h"
#include "div.h"

#if 0 // XSI
#  include "drand48.h"
#  include "ecvt.h"
#  include "erand48.h"
#endif

#include "exit.h"

#if 0 // XSI
#  include "fcvt.h"
#endif

#include "free.h"

#if 0 // XSI
#  include "gcvt.h"
#endif

#include "getenv.h"

#if 0 // XSI
#  include "getsubopt.h"
#  include "grantpt.h"
#  include "initstate.h"
#  include "jrand48.h"
#  include "l64a.h"
#endif

#include "labs.h"

#if 0 // XSI
#  include "lcong48.h"
#endif

#include "ldiv.h"
#include "llabs.h"
#include "lldiv.h"

#if 0 // XSI
#  include "lrand48.h"
#endif

#include "malloc.h"
#include "mblen.h"
#include "mbstowcs.h"
#include "mbtowc.h"

#if 0 // XSI
#  include "mktemp.h"
#  include "mkstemp.h"
#  include "mrand48.h"
#  include "nrand48.h"
#endif

#if 0 // ADV
#  include "posix_memalign.h"
#endif

#if 0 // XSI
#  include "posix_openpt.h"
#  include "ptsname.h"
#  include "putenv.h"
#endif

#include "qsort.h"
#include "rand.h"

#if 0 // TFS
#  include "rand_r"
#endif

#if 0 // XSI
#  include "random.h"
#endif

#include "realloc.h"

#if 0 // XSI
#  include "realpath.h"
#  include "seed48.h"
#endif

#if 0 // CX
#  include "setenv.h"
#endif

#if 0 // XSI
#  include "setkey.h"
#  include "setstate.h"
#endif

#include "srand.h"

#if 0 // XSI
#  include "srand48.h"
#  include "srandom.h"
#endif

#include "strtod.h"
#include "strtof.h"
#include "strtol.h"
#include "strtold.h"
#include "strtoll.h"
#include "strtoul.h"
#include "strtoull.h"
#include "system.h"

#if 0 // XSI
#  include "unlockpt.h"
#endif

#if 0 // CX
#  include "unsetenv.h"
#endif

#include "wcstombs.h"
#include "wctomb.h"

#endif

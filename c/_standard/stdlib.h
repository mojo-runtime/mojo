#ifndef _stdlib_h_
#define _stdlib_h_

// Per: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdlib.h.html

// ...shall define the following macros:

#include "c/EXIT_FAILURE.h"
#include "c/EXIT_SUCCESS.h"
#include "c/NULL.h"
#include "c/RAND_MAX.h"
#include "c/MB_CUR_MAX.h"

// ...shall be defined through typedef:

#include "c/div_t.h"
#include "c/ldiv_t.h"
#include "c/lldiv_t.h"
#include "c/size_t.h"
#include "c/wchar_t.h"

// ...the following symbolic names and macros shall be defined as in <sys/wait.h>:

#if 0 // XSI
#  include "c/WNOHANG.h"
#  include "c/WUNTRACED.h"
#  include "c/WEXITSTATUS.h"
#  include "c/WIFEXITED.h"
#  include "c/WIFSIGNALED.h"
#  include "c/WIFSTOPPED.h"
#  include "c/WSTOPSIG.h"
#  include "c/WTERMSIG.h"
#endif

// ...shall be declared as functions and may also be defined as macros.
// Function prototypes shall be provided.

#include "c/_Exit.h"

#if 0 // XSI
#  include "c/a64l.h"
#endif

#include "c/abort.h"
#include "c/abs.h"
#include "c/atexit.h"
#include "c/atof.h"
#include "c/atoi.h"
#include "c/aol.h"
#include "c/atoll.h"
#include "c/bsearch.h"
#include "c/calloc.h"
#include "c/div.h"

#if 0 // XSI
#  include "c/drand48.h"
#  include "c/ecvt.h"
#  include "c/erand48.h"
#endif

#include "c/exit.h"

#if 0 // XSI
#  include "c/fcvt.h"
#endif

#include "c/free.h"

#if 0 // XSI
#  include "c/gcvt.h"
#endif

#include "c/getenv.h"

#if 0 // XSI
#  include "c/getsubopt.h"
#  include "c/grantpt.h"
#  include "c/initstate.h"
#  include "c/jrand48.h"
#  include "c/l64a.h"
#endif

#include "c/labs.h"

#if 0 // XSI
#  include "c/lcong48.h"
#endif

#include "c/ldiv.h"
#include "c/llabs.h"
#include "c/lldiv.h"

#if 0 // XSI
#  include "c/lrand48.h"
#endif

#include "c/malloc.h"
#include "c/mblen.h"
#include "c/mbstowcs.h"
#include "c/mbtowc.h"

#if 0 // XSI
#  include "c/mktemp.h"
#  include "c/mkstemp.h"
#  include "c/mrand48.h"
#  include "c/nrand48.h"
#endif

#if 0 // ADV
#  include "c/posix_memalign.h"
#endif

#if 0 // XSI
#  include "c/posix_openpt.h"
#  include "c/ptsname.h"
#  include "c/putenv.h"
#endif

#include "c/qsort.h"
#include "c/rand.h"

#if 0 // TFS
#  include "c/rand_r"
#endif

#if 0 // XSI
#  include "c/random.h"
#endif

#include "c/realloc.h"

#if 0 // XSI
#  include "c/realpath.h"
#  include "c/seed48.h"
#endif

#if 0 // CX
#  include "c/setenv.h"
#endif

#if 0 // XSI
#  include "c/setkey.h"
#  include "c/setstate.h"
#endif

#include "c/srand.h"

#if 0 // XSI
#  include "c/srand48.h"
#  include "c/srandom.h"
#endif

#include "c/strtod.h"
#include "c/strtof.h"
#include "c/strtol.h"
#include "c/strtold.h"
#include "c/strtoll.h"
#include "c/strtoul.h"
#include "c/strtoull.h"
#include "c/system.h"

#if 0 // XSI
#  include "c/unlockpt.h"
#endif

#if 0 // CX
#  include "c/unsetenv.h"
#endif

#include "c/wcstombs.h"
#include "c/wctomb.h"

#endif

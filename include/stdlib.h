#pragma once

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
// WNOHANG
// WUNTRACED
// WEXITSTATUS
// WIFEXITED
// WIFSIGNALED
// WIFSTOPPED
// WSTOPSIG
// WTERMSIG
#endif

// ...shall be declared as functions and may also be defined as macros.
// Function prototypes shall be provided.

#include "c/_Exit.h"

#if 0 // XSI
// a64l
#endif

// abort
#include "c/abs.h"
// atexit
// atof
// atoi
// aol
// atoll
// bsearch
// calloc
// div

#if 0 // XSI
// drand48
// ecvt
// erand48
#endif

// exit

#if 0 // XSI
// fcvt
#endif

// free

#if 0 // XSI
// gcvt
#endif

// getenv

#if 0 // XSI
// getsubopt
// grantpt
// initstate
// jrand48
// l64a
#endif

// labs

#if 0 // XSI
// lcong48
#endif

// ldiv
// llabs
// lldiv

#if 0 // XSI
// lrand48
#endif

// malloc
// mblen
// mbstowcs
// mbtowc

#if 0 // XSI
// mktemp
// mkstemp
// mrand48
// nrand48
#endif

#if 0 // ADV
// posix_memalign
#endif

#if 0 // XSI
// posix_openpt
// ptsname
// putenv
#endif

// qsort
// rand

#if 0 // TFS
// rand_r
#endif

#if 0 // XSI
// random
#endif

// realloc

#if 0 // XSI
// realpath
// seed48
#endif

#if 0 // CX
// setenv
#endif

#if 0 // XSI
// setkey
// setstate
#endif

// srand

#if 0 // XSI
// srand48
// srandom
#endif

// strtod
// strtof
// strtol
// strtold
// strtoll
// strtoul
// strtoull
// system

#if 0 // XSI
// unlockpt
#endif

#if 0 // CX
// unsetenv
#endif

// wcstombs
// wctomb

#pragma once

// Per: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/time.h.html

// The <time.h> header shall define the following symbolic names:

#include <c/NULL.h>
// CLOCKS_PER_SEC
// CLOCK_PROCESS_CPUTIME_ID [TMR\CPT]
// CLOCK_THREAD_CPUTIME_ID [TMR\CPT]

// The <time.h> header shall declare the structure timespec...

#if 1 // TMR
#  include "struct-timespec.h"
#endif

// The <time.h> header shall also declare the itimerspec structure...

// struct itimerspec

// The following manifest constants shall be defined:

// CLOCK_REALTIME
// TIMER_ABSTIME
// CLOCK_MONOTONIC [MON]

#include "clock_t.h"
#include <c/size_t.h>
#include "time_t.h"
#if 1 // TMR
#  include "clockid_t.h"
#  include "timer_t.h"
#endif

#if 0 // XSI
// getdate_err
#endif

// The following shall be declared as functions and may also be defined as macros.
// Function prototypes shall be provided.

// asctime
// asctime_r [TSF]
// clock
// clock_getcpuclockid [CPT]

#if 0 // TMR
// clock_getres
// clock_gettime
#endif

#if 0 // CS
// clock_nanosleep
#endif

#if 0 // TMR
// clock_settime
#endif

// ctime
#if 0 // TSF
// ctime_r
#endif

// difftime

#if 0 // XSI
// getdate
#endif

// gmtime
#if 0 // TSF
// gmtime_r
#endif

// localtime
#if 0 // TSF
// localtime_r
#endif

// mktime

#if 0 // TMR
// nanosleep
#endif

// strftime

#if 0 // XSI
// strptime
#endif

// time

#if 0 // TMR
// timer_create
// timer_delete
// timer_gettime
// timer_getoverrun
// timer_settime
#endif

// tzset

// The following shall be declared as variables:

#if 0 // XSI
// daylight
// timezone
#endif

// tzname

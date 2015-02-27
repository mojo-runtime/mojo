#ifndef _time_h_
#define _time_h_

// Per: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/time.h.html

// The <time.h> header shall define the following symbolic names:

#include "NULL.h"
#include "CLOCKS_PER_SEC.h"
#if 0 // TMR|CPT
#  include "CLOCK_PROCESS_CPUTIME_ID.h"
#  include "CLOCK_THREAD_CPUTIME_ID.h"
#endif

// The <time.h> header shall declare the structure timespec...

#if 0 // TMR
#  include "struct-timespec.h"
#endif

// The <time.h> header shall also declare the itimerspec structure...

#include "struct-itimerspec.h"

// The following manifest constants shall be defined:

#include "CLOCK_REALTIME.h"
#include "TIMER_ABSTIME.h"
#if 0 // MON
#  include "CLOCK_MONOTONIC.h"
#endif

// The (following) types shall be defined as described in <sys/types.h>.

#include "clock_t.h"
#include "size_t.h"
#include "time_t.h"
#if 0 // TMR
#  include "clockid_t.h"
#  include "timer_t.h"
#endif

//

#if 0 // XSI
#  include "getdate_err.h"
#endif

// The following shall be declared as functions and may also be defined as macros.
// Function prototypes shall be provided.

#include "asctime.h"

#if 0 // TSF
#  include "asctime_r.h"
#endif

#include "clock.h"

#if 0 // CPT
#  include "clock_getcpuclockid.h"
#endif

#if 0 // TMR
#  include "clock_getres.h"
#  include "clock_gettime.h"
#endif

#if 0 // CS
#  include "clock_nanosleep.h"
#endif

#if 0 // TMR
#  include "clock_settime.h"
#endif

#include "ctime.h"
#if 0 // TSF
#  include "ctime_r.h"
#endif

#include "difftime.h"

#if 0 // XSI
#  include "getdate.h"
#endif

#include "gmtime.h"

#if 0 // TSF
#  include "gmtime_r.h"
#endif

#include "localtime.h"

#if 0 // TSF
#  include "localtime_r.h"
#endif

#include "mktime.h"

#if 0 // TMR
#  include "nanosleep.h"
#endif

#include "strftime.h"

#if 0 // XSI
#  include "strptime.h"
#endif

#include "time.h"

#if 0 // TMR
#  include "timer_create.h"
#  include "timer_delete.h"
#  include "timer_gettime.h"
#  include "timer_getoverrun.h"
#  include "timer_settime.h"
#endif

#include "tzset.h"

// The following shall be declared as variables:

#if 0 // XSI
#  include "daylight.h"
#  include "timezone.h"
#endif

#include "tzname.h"

#endif

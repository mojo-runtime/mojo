#pragma once

// Per: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/time.h.html

// The <time.h> header shall define the following symbolic names:

#include "../c/NULL.h"
#include "../c/CLOCKS_PER_SEC.h"
#if 0 // TMR|CPT
#  include "../c/CLOCK_PROCESS_CPUTIME_ID.h"
#  include "../c/CLOCK_THREAD_CPUTIME_ID.h"
#endif

// The <time.h> header shall declare the structure timespec...

#if 0 // TMR
#  include "../c/struct-timespec.h"
#endif

// The <time.h> header shall also declare the itimerspec structure...

#include "../c/struct-itimerspec.h"

// The following manifest constants shall be defined:

#include "../c/CLOCK_REALTIME.h"
#include "../c/TIMER_ABSTIME.h"
#if 0 // MON
#  include "../c/CLOCK_MONOTONIC.h"
#endif

// The (following) types shall be defined as described in <sys/types.h>.

#include "../c/clock_t.h"
#include "../c/size_t.h"
#include "../c/time_t.h"
#if 0 // TMR
#  include "../c/clockid_t.h"
#  include "../c/timer_t.h"
#endif

//

#if 0 // XSI
#  include "../c/getdate_err.h"
#endif

// The following shall be declared as functions and may also be defined as macros.
// Function prototypes shall be provided.

#include "../c/asctime.h"

#if 0 // TSF
#  include "../c/asctime_r.h"
#endif

#include "../c/clock.h"

#if 0 // CPT
#  include "../c/clock_getcpuclockid.h"
#endif

#if 0 // TMR
#  include "../c/clock_getres.h"
#  include "../c/clock_gettime.h"
#endif

#if 0 // CS
#  include "../c/clock_nanosleep.h"
#endif

#if 0 // TMR
#  include "../c/clock_settime.h"
#endif

#include "../c/ctime.h"
#if 0 // TSF
#  include "../c/ctime_r.h"
#endif

#include "../c/difftime.h"

#if 0 // XSI
#  include "../c/getdate.h"
#endif

#include "../c/gmtime.h"

#if 0 // TSF
#  include "../c/gmtime_r.h"
#endif

#include "../c/localtime.h"

#if 0 // TSF
#  include "../c/localtime_r.h"
#endif

#include "../c/mktime.h"

#if 0 // TMR
#  include "../c/nanosleep.h"
#endif

#include "../c/strftime.h"

#if 0 // XSI
#  include "../c/strptime.h"
#endif

#include "../c/time.h"

#if 0 // TMR
#  include "../c/timer_create.h"
#  include "../c/timer_delete.h"
#  include "../c/timer_gettime.h"
#  include "../c/timer_getoverrun.h"
#  include "../c/timer_settime.h"
#endif

#include "../c/tzset.h"

// The following shall be declared as variables:

#if 0 // XSI
#  include "../c/daylight.h"
#  include "../c/timezone.h"
#endif

#include "../c/tzname.h"

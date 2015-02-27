#ifndef _stdarg_h_
#define _stdarg_h_

// Per: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdarg.h.html

// The type va_list shall be defined for variables used to traverse the list.

#include "../va_list.h"

// The va_start() macro is invoked to initialize ap to
// the beginning of the list before any calls to va_arg().

#include "../va_start.h"

// The va_copy() macro initializes dest as a copy of src, as if the va_start() macro
// had been applied to dest followed by the same sequence of uses of the va_arg() macro
// as had previously been used to reach the present state of src.

#include "../va_copy.h"

// The va_arg() macro shall return the next argument in the list pointed to by ap.
// Each invocation of va_arg() modifies ap so that the values of successive arguments
// are returned in turn.

#include "../va_arg.h"

// The va_end() macro is used to clean up;
// it invalidates ap for use (unless va_start() or va_copy() is invoked again).

#include "../va_end.h"

#endif


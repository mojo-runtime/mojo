#ifndef c_standard_c99_stdbool_h_
#define c_standard_c99_stdbool_h_

// Per: http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdbool.h.html

//------------------------------------------------------------------------------------------------//
// "The <stdbool.h> header shall define the following macros:"

#include "c/bool.h"  // "Expands to `_Bool`."
#include "c/true.h"  // "Expands to the integer constant 1."
#include "c/false.h" // "Expands to the integer constant 0."

// TODO(?): __bool_true_and_false_are_defined
// "Expands to the integer constant 1."

//------------------------------------------------------------------------------------------------//

#endif

#ifndef c_NCCS_h_
#define c_NCCS_h_

#include "size_t.h"

_c_namespace

static
const size_t
NCCS =
#ifdef __linux__
#  ifdef __x86_64__
 19 // USUALLY
#  else
#    error
#  endif
#else
#  error
#endif
 ;

_c_namespace_end

#endif

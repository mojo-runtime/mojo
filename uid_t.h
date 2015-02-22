#ifndef c_uid_t_h_
#define c_uid_t_h_

#include "c/_c_namespace.h"

_c_namespace

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned int // uint32_t
#  else
#    error
#  endif
#else
#  error
#endif
uid_t;

_c_namespace_end

#endif

#ifndef c_ino_t_h_
#define c_ino_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned long // uint64_t
#  else
#    error
#  endif
#else
#  error
#endif
ino_t;

_c_namespace_end

#endif

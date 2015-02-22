#ifndef c_sig_atomic_t_h_
#define c_sig_atomic_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __SIG_ATOMIC_TYPE__
__SIG_ATOMIC_TYPE__
#elif defined(__linux__) && defined(__x86_64__)
int
#else
#  error
#endif
sig_atomic_t;

_c_namespace_end

#endif

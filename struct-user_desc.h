#ifndef c_struct_user_desc_h_
#define c_struct_user_desc_h_

#include "_internal/_c_namespace.h"

_c_namespace

struct user_desc
{
#if defined(__linux__) && defined(__x86_64__)
    unsigned int entry_number;
    unsigned int base_addr;
    unsigned int limit;
    unsigned int seg_32bit:1;
    unsigned int contents:2;
    unsigned int read_exec_only:1;
    unsigned int limit_in_pages:1;
    unsigned int seg_not_present:1;
    unsigned int useable:1;
    unsigned int lm:1;
#else
#  error
#endif
};

_c_namespace_end

#endif

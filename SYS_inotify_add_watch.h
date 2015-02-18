#ifndef c_SYS_inotify_add_watch_h_
#define c_SYS_inotify_add_watch_h_

#include "c/SystemCallNumber.h"

__c_namespace_open

static
const SystemCallNumber
SYS_inotify_add_watch =
#if defined(__linux__) && defined(__x86_64__)
 254
#else
#  error
#endif
 ;

__c_namespace_close

#endif

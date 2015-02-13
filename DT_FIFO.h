#ifndef c_DT_FIFO_h_
#define c_DT_FIFO_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_FIFO =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif

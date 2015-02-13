#ifndef c_DT_UNKNOWN_h_
#define c_DT_UNKNOWN_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_UNKNOWN =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

__c_namespace_close

#endif

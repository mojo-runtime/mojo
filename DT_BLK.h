#ifndef c_DT_BLK_h_
#define c_DT_BLK_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_BLK =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif

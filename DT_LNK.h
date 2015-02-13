#ifndef c_DT_LNK_h_
#define c_DT_LNK_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_LNK =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

__c_namespace_close

#endif

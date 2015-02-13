#ifndef c_DT_CHR_h_
#define c_DT_CHR_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_CHR =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif

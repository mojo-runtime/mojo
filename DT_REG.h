#ifndef c_DT_REG_h_
#define c_DT_REG_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_REG =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif

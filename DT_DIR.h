#ifndef c_DT_DIR_h_
#define c_DT_DIR_h_

#include "c/DirectoryEntryKind.h"

__c_namespace_open

static
const DirectoryEntryKind
DT_DIR =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif

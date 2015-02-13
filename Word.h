#ifndef c_Word_h_
#define c_Word_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __x86_64__
unsigned long
#else
#  error
#endif
Word;

__c_namespace_close

#endif

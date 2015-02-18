#ifndef c_struct_utsname_h_
#define c_struct_utsname_h_

#include "c/__c_namespace.h"

__c_namespace_open

struct utsname
{
#ifdef __linux__
    char    sysname[65];
    char   nodename[65];
    char    release[65];
    char    version[65];
    char    machine[65];
    char domainname[65];
#else
#  error
#endif
};

__c_namespace_close

#endif

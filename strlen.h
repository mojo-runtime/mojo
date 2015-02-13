#ifndef c_strlen_h_
#define c_strlen_h_

#include "c/size_t.h"
#include "c/_c_constexpr.h"

__c_namespace_open

static _c_constexpr
size_t
strlen(const char* data)
{
    size_t
    result = 0;

    while (*data != '\0') {
        result += 1;
        data   += 1;
    }

    return result;
}

__c_namespace_close

#endif

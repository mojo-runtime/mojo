#ifndef c_auxv_t_h_
#define c_auxv_t_h_

#include "c/AuxiliaryVectorType.h"
#include "c/Word.h"

__c_namespace_open

typedef struct
{
    AuxiliaryVectorType
    a_type;

    char
    _padding[sizeof(Word) - sizeof(AuxiliaryVectorType)];

    union
    {
        long
        a_val;

        void*
        a_ptr;

        void
        (*a_func)();
    }
    a_un;
}
auxv_t;

__c_namespace_close

#endif

#pragma once

#include "../__Byte.h"
#include "../__Word.h"

struct __Arguments
{
    //----------------------------------------------------------------------------------------------

    __Word
    __argc;

    __Byte*
    __argv[1]; // At least 1 - NULL terminated
};

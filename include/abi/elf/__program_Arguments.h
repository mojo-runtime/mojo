#pragma once

#include "abi/__Byte.h"
#include "abi/__Word.h"

struct __program_Arguments
{
    //----------------------------------------------------------------------------------------------

    __Word
    __argc;

    __Byte*
    __argv[1]; // At least 1 - NULL terminated
};

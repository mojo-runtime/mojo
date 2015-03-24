#pragma once

#include "compat/__Byte.h"
#include "compat/__Word.h"

namespace program { inline namespace _elf_ {

struct Arguments
{
    //----------------------------------------------------------------------------------------------

    __Word
    __argc;

    __Byte*
    __argv[1]; // At least 1 - NULL terminated
};

}}

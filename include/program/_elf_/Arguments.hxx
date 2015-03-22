#pragma once

#include "Byte.h"
#include "Word.h"

namespace program { inline namespace _elf_ {

struct Arguments
{
    //----------------------------------------------------------------------------------------------

    Word
    __argc;

    Byte*
    __argv[1]; // At least 1 - NULL terminated
};

}}

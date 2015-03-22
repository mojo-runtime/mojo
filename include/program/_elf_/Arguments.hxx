#pragma once

namespace program { inline namespace _elf_ {

struct Arguments
{
    //----------------------------------------------------------------------------------------------

    unsigned int
    __argc __attribute__((__mode__(__word__)));

    char*
    __argv[1]; // At least 1 - NULL terminated
};

}}

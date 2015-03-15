#pragma once

#include "__Byte.h"
#include "__Word.h"

namespace elf {

struct Arguments
{
    Arguments() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    __Word
    __count;

    __Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}


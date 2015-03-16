#pragma once

#include "compat/__Byte.h"

namespace elf {

struct Environment
{
    Environment() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    __Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}

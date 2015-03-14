#pragma once

namespace elf {

struct Environment
{
    Environment() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    abi::Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}

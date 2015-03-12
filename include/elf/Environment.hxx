#ifndef _elf_Environment_hxx_
#define _elf_Environment_hxx_

namespace elf {

struct Environment
{
    Environment() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    architecture::Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}

#endif


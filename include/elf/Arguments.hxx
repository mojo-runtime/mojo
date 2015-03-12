#ifndef _elf_Arguments_hxx_
#define _elf_Arguments_hxx_

#include "architecture/Byte.hxx"
#include "architecture/Word.hxx"

namespace elf {

struct Arguments
{
    Arguments() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    architecture::Word
    __count;

    architecture::Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}

#endif


#ifndef _elf_Arguments_hxx_
#define _elf_Arguments_hxx_

#include "machine/Byte.hxx"
#include "machine/Word.hxx"

namespace elf {

struct Arguments
{
    Arguments() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    machine::Word
    __count;

    machine::Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}

#endif


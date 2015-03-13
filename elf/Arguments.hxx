#ifndef _elf_Arguments_hxx_
#define _elf_Arguments_hxx_

#include "abi/Byte.hxx"
#include "abi/Word.hxx"

namespace elf {

struct Arguments
{
    Arguments() = delete;

  private:
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    abi::Word
    __count;

    abi::Byte*
    __pointers[1]; // At least
#pragma clang diagnostic pop
};

}

#endif


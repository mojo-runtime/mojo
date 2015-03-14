#pragma once

#include "abi/Byte.hxx"
#include "abi/Word.hxx"

namespace elf {

struct InitialStack
{
    // The "structure" on top of the stack after process initialization.

    abi::Word
    argc() const
    {
        return this->__argument_count;
    }

    abi::Byte**
    argv()
    {
        return this->__argument_pointers;
    }

    abi::Byte**
    envp()
    {
        return this->argv() + this->argc() + 1;
    }

  private:
    // See: http://www.x86-64.org/documentation/abi.pdf
    //      http://asm.sourceforge.net/articles/startup.html

    // Argument count

    abi::Word
    __argument_count;

    // Argument pointers

    abi::Byte*
    __argument_pointers[1]; // At least 1 - NULL terminated

    // Environment pointers …
    // 0
    // Auxiliary vector entries …
    // Null auxiliary vector entry
    // Unspecified
    // Information block …
    // Unspecified
};

}

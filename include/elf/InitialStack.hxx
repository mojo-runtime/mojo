#ifndef _elf_InitialStack_hxx_
#define _elf_InitialStack_hxx_

#include "platform/Byte.hxx"
#include "platform/Word.hxx"

namespace elf {

struct InitialStack
{
    // The "structure" on top of the stack after process initialization.

    platform::Word
    argc() const
    {
        return this->__argument_count;
    }

    platform::Byte**
    argv()
    {
        return this->__argument_pointers;
    }

    platform::Byte**
    envp()
    {
        return this->argv() + this->argc() + 1;
    }

  private:
    // See: http://www.x86-64.org/documentation/abi.pdf
    //      http://asm.sourceforge.net/articles/startup.html

    // Argument count

    platform::Word
    __argument_count;

    // Argument pointers

    platform::Byte*
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

#endif

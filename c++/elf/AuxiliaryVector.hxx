#pragma once

#include "__Word.h"

namespace elf {

struct AuxiliaryVector
{
    AuxiliaryVector() = delete;

  private:
    enum class Kind : __Word
    {
#if defined(__x86_64__)
        null                            =  0, // AT_NULL
        ignore                          =  1, // AT_IGNORE
        executable_file_descriptor      =  2, // AT_EXECFD
        program_header_table            =  3, // AT_PHDR
        program_header_table_entry_size =  4, // AT_PHENT
        program_header_table_length     =  5, // AT_PHNUM
        page_size                       =  6, // AT_PAGESZ
        base_address                    =  7, // AT_BASE
        flags                           =  8, // AT_FLAGS
        entry_point                     =  9, // AT_ENTRY
        not_elf                         = 10, // AT_NOTELF
        user_id                         = 11, // AT_UID
        effective_user_id               = 12, // AT_EUID
        group_id                        = 13, // AT_GID
        effective_group_id              = 14  // AT_EGID
#else
#  error
#endif
    };

    struct Entry
    {
        Kind
        kind;

        __Word
        data;
    };

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
    Entry
    __entries[1]; // At least
#pragma clang diagnostic pop
};

}

#pragma once

#include <std/uint8_t.h>
#include <std/uint16_t.h>
#include <std/uint32_t.h>

struct dirent
{
    uint32_t
    d_fileno;

    uint16_t
    d_reclen;

    uint8_t
    d_type;

    uint8_t
    d_namlen;

    char
    d_name[256];
};

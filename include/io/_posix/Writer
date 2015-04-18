// -*- C++ -*-

#pragma once

#include "system/write"

namespace io { inline namespace _posix {

struct Writer
{
    constexpr explicit
    Writer(int fd)
        : __fd(fd)
    {
    }

    //----------------------------------------------------------------------------------------------

    auto
    write(const void* data, size_t length) const noexcept
    {
        return system::write(this->__fd, data, length);
    }

  private:
    int
    __fd;
};

}}

#pragma once

#include "os/write.hxx"

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
        return os::write(this->__fd, data, length);
    }

  private:
    int
    __fd;
};

}}

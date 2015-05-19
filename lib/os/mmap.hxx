#pragma once

#include <c/SYS_mmap.h>
#include <c/off_t.h>
#include <c/size_t.h>
#include "Result.hxx"

namespace os {

static inline
auto
mmap(void*  addr,
     size_t length,
     int    prot,
     int    flags,
     int    fd,
     off_t  offset) noexcept
{
#define _(name, doc) _##name = name
    enum Error
    {
#if defined(__FreeBSD__) || defined(__linux__)
#  include <c/EACCES.h>

        _(EACCES,
          "The flag PROT_READ was specified as part of the `prot` argument"
          " and `fd` was not open for reading."
          " / "
          "The flags MAP_SHARED and PROT_WRITE were specified as part of the `prot` argument"
          " and `fd` was not open for writing."
          " / "
          "(linux) A file descriptor refers to a non-regular file."
          " / "
          "(linux) PROT_WRITE is set, but the file is append-only."),

#endif
#if defined(__linux__)
#  include <c/EAGAIN.h>

        _(EAGAIN,
          "The file has been locked."
          " / "
          "Too much memory has been locked."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include <c/EBADF.h>
#  include <c/EINVAL.h>

        _(EBADF,
          "`fd` is not a valid file descriptor."),

        _(EINVAL,
          "`length` was 0."
          " / "
          "(freebsd) MAP_FIXED was specified and the `addr` argument was not page aligned,"
          " or part of the desired address space resides out of the valid address space"
          " for a user process."
          " / "
          "(freebsd) Both MAP_FIXED and MAP_32BIT were specified and"
          " part of the desired address space resides outside of the first 2GB"
          " of user address space."
          " / "
          "(freebsd) MAP_ALIGNED was specified and the desired alignment was either"
          " larger than the virtual address size of the machine or smaller than a page."
          " / "
          "(freebsd) MAP_ANON was specified and the `fd` argument was not -1."
          " / "
          "(freebsd) MAP_ANON was specified and the `offset` argument was not 0."
          " / "
          "(freebsd) Both MAP_FIXED and MAP_EXCL were specified, but"
          " the request region is already used by a mapping."
          " / "
          "(freebsd) MAP_EXCL was specified, but MAP_FIXED was not."
          " / "
          "(linux) We don't like `addr`, `length`, or `offset."
          " / "
          "(linux) `flags` contained neither MAP_PRIVATE or MAP_SHARED."
          " / "
          "(linux) `flags` contained both MAP_PRIVATE and MAP_SHARED."),

#endif
#if defined(__linux__)
#  include <c/ENFILE.h>

        _(ENFILE,
          "The system limit on the total number of open files has been reached."),

#endif
#if defined(__FreeBSD__) || defined(__linux__)
#  include <c/ENODEV.h>
#  include <c/ENOMEM.h>

        _(ENODEV,
          "(freebsd) MAP_ANON has not been specified and"
          " `fd` did not reference a regular or character special file."
          " / "
          "(linux) The underlying filesystem of the specified file"
          " does not support memory mapping."),

        _(ENOMEM,
          "(freebsd) MAP_FIXED was specified and the `addr` argument was not available."
          " / "
          "(freebsd) MAP_ANON was specified and insufficient memory was available."
          " / "
          "(linux) No memory is available"
          " / "
          "(linux) The process's maximum number of mappings would have been exceeded."),

#endif
#if defined(__linux__)
#  include <c/EOVERFLOW.h>
#  include <c/EPERM.h>
#  include <c/ETXTBSY.h>

        _(EOVERFLOW,
          "On 32-bit architecture with the large file extension:"
          " the number of pages used for `length` plus"
          " number of pages used for `offset` would overflow unsigned long (32 bits)."),

        _(EPERM,
          "The `prot` argument asks for PROT_EXEC but"
          " the mapped area belongs to a file on a filesystem that was mounted no-exec."),

        _(ETXTBSY,
          "MAP_DENYWRITE was set but"
          " the object specified by `fd` is open for writing."),

#endif
    };
#undef _

    return Result<void*, Error>(SYS_mmap, addr, length, prot, flags, fd, offset);
}

}

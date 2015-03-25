#pragma once

#include "c/BRKINT.h"
#include "c/CS8.h"
#include "c/ECHO.h"
#include "c/ICANON.h"
#include "c/ICRNL.h"
#include "c/IEXTEN.h"
#include "c/INPCK.h"
#include "c/ISIG.h"
#include "c/ISTRIP.h"
#include "c/IXON.h"
#include "c/OPOST.h"
#include "c/TCGETS.h"
#include "c/TCSETS.h"
#include "c/VMIN.h"
#include "c/VTIME.h"
#include "c/struct termios.h"
#include "c/__todo.h"
#include "c/__unreachable.h"
#include "os/ioctl.hxx"

namespace terminal {

/*
 * RAII context manager which sets a file descriptor into "raw" mode.
 */
struct Raw
{
    Raw(int fd) noexcept
        : __fd(fd)
    {
        auto
        result = os::ioctl(this->__fd, TCGETS, &this->__saved);
        if (result.is_error()) {
            switch (result.error()) {
            case EBADF:  __unreachable("bad `Reader`");
            case EFAULT: __unreachable("pointer is fine");
            case EINVAL: __unreachable("invalid request");
            case ENOTTY: __todo("not a tty");
            }
        }

        struct termios
        raw = this->__saved;

        raw.c_iflag &= static_cast<tcflag_t>(~(BRKINT | ICRNL | INPCK | ISTRIP | IXON));
        raw.c_oflag &= static_cast<tcflag_t>(~(OPOST));
        raw.c_cflag &= (CS8);
        raw.c_lflag &= static_cast<tcflag_t>(~(ECHO | ICANON | IEXTEN | ISIG));

        raw.c_cc[VMIN] = 1;
        raw.c_cc[VTIME] = 0;

        result = os::ioctl(this->__fd, TCSETS, &raw);
        if (result.is_error()) {
            switch (result.error()) {
            case EBADF:  __unreachable("we just used it");
            case EFAULT: __unreachable("struct is on the stack");
            case EINVAL: __unreachable("invalid request");
            case ENOTTY: __unreachable("we just proved it's a tty");
            }
        }
    }

    ~Raw()
    {
        os::ioctl(this->__fd, TCSETS, &this->__saved);
    }

  private:
    int
    __fd;

    struct termios
    __saved;
};

}

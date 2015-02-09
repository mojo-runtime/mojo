#ifndef _c__termios_h
#define _c__termios_h

#include "c/NCCS.h"
#include "c/cc_t.h"
#include "c/speed_t.h"
#include "c/tcflag_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct termios
{
#ifdef __linux__
    tcflag_t
    c_iflag;

    tcflag_t
    c_oflag;

    tcflag_t
    c_cflag;

    tcflag_t
    c_lflag;

    cc_t
    c_line;

    cc_t
    c_cc[NCCS];
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

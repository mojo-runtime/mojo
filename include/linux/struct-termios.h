#ifndef _linux_struct_termios_h_
#define _linux_struct_termios_h_

#include "c/NCCS.h"
#include "cc_t.h"
#include "tcflag_t.h"

struct termios
{
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
};

#endif

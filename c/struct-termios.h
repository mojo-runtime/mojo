#ifndef _c_struct_termios_h_
#define _c_struct_termios_h_

#if defined(__linux__)
#  include "NCCS.h"
#  include "cc_t.h"
#  include "tcflag_t.h"
#elif defined(__FreeBSD__)
#  include "NCCS.h"
#  include "cc_t.h"
#  include "speed_t.h"
#  include "tcflag_t.h"
#else
#  error
#endif

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

#if defined(__linux__)
    cc_t
    c_line;
#endif

    cc_t
    c_cc[NCCS];

#if defined(__FreeBSD__)
    speed_t
    c_ispeed;

    speed_t
    c_ospeed;
#endif
};

#endif

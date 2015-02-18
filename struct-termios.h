#ifndef c_struct_termios_h_
#define c_struct_termios_h_

#include "c/NCCS.h"
#include "c/cc_t.h"
#include "c/speed_t.h"
#include "c/tcflag_t.h"

__c_namespace_open

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

__c_namespace_close

#endif

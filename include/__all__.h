#include "builtin/__all__.h"
#include "c/__all__.h"
#include "compat/__all__.h"
#include "config/__all__.h"

#if defined(__ELF__)
#include "elf/__all__.h"
#endif

#if defined(__FreeBSD__)
#include "freebsd/__all__.h"
#endif

#if defined(__linux__)
#include "linux/__all__.h"
#endif

#if defined(__unix__)
#include "unix/__all__.h"
#endif

#if defined(__linux__)
#  include "linux/EILSEQ.h"
#elif defined(__FreeBSD__)
#  include "freebsd/EILSEQ.h"
#else
#  error
#endif

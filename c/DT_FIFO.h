#ifndef DT_FIFO

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_FIFO 1
#else
#  error
#endif

#endif

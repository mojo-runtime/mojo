#ifndef WORD

#define WORD_64 64

#if defined(__LP64__)
#  define WORD WORD_64
#else
#  error
#endif

#endif

#ifndef c_Word_h_
#define c_Word_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __x86_64__
unsigned long
#else
#  error
#endif
Word;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

#ifndef _c___SignalBand_h
#define _c___SignalBand_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int16_t
#  else
#    error
#  endif
#else
#  error
#endif
_SignalBand;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

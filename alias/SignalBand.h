#ifndef _c__alias__SignalBand_h
#define _c__alias__SignalBand_h

#ifdef __cplusplus
inline namespace c {
inline namespace alias {
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
SignalBand;

#ifdef __cplusplus
} // inline namespace alias
} // inline namespace c
#endif

#endif

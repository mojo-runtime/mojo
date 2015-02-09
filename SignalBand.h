#ifndef c_SignalBand_h_
#define c_SignalBand_h_

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
SignalBand;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif

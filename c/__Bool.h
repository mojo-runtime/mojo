#ifndef ___Bool_h_
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define ___Bool_h_
#pragma clang diagnostic pop

#if defined(__cplusplus)
typedef bool __Bool;
#elif defined(__GNUC__)
#  if (__GNUC__ >= 3)
typedef _Bool __Bool;
#  else
#    error
#  endif
#else
#  error
#endif

#endif

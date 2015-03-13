#ifndef __Bool

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

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __Bool __Bool
#pragma clang diagnostic pop

#endif

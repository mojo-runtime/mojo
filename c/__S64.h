#ifndef __S64

#if defined(__INT64_TYPE__)
typedef __INT64_TYPE__ __S64;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __S64 __S64
#pragma clang diagnostic pop

#endif

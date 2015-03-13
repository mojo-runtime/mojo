#ifndef __S32

#if defined(__INT32_TYPE__)
typedef __INT32_TYPE__ __S32;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __S32 __S32
#pragma clang diagnostic pop

#endif

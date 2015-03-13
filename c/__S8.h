#ifndef __S8

#if defined(__INT8_TYPE__)
typedef __INT8_TYPE__ __S8;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __S8 __S8
#pragma clang diagnostic pop

#endif

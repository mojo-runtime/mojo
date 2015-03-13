#ifndef __S16

#if defined(__INT16_TYPE__)
typedef __INT16_TYPE__ __S16;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __S16 __S16
#pragma clang diagnostic pop

#endif

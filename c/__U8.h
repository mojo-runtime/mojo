#ifndef __U8

#if defined(__UINT8_TYPE__)
typedef __UINT8_TYPE__ __U8;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __U8 __U8
#pragma clang diagnostic pop

#endif

#ifndef ___U8_h_
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define ___U8_h_
#pragma clang diagnostic pop

#if defined(__UINT8_TYPE__)
typedef __UINT8_TYPE__ __U8;
#else
#  error
#endif

#endif

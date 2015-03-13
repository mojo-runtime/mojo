#ifndef ___S8_h_
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define ___S8_h_
#pragma clang diagnostic pop

#if defined(__INT8_TYPE__)
typedef __INT8_TYPE__ __S8;
#else
#  error
#endif

#endif

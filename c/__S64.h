#ifndef ___S64_h_
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define ___S64_h_
#pragma clang diagnostic pop

#if defined(__INT64_TYPE__)
typedef __INT64_TYPE__ __S64;
#else
#  error
#endif

#endif

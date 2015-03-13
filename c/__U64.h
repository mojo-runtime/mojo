#ifndef ___U64_h_
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define ___U64_h_
#pragma clang diagnostic pop

#if defined(__UINT64_TYPE__)
typedef __UINT64_TYPE__ __U64;
#else
#  error
#endif

#endif

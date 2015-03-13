#ifndef ___U32_h_
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define ___U32_h_
#pragma clang diagnostic pop

#if defined(__UINT32_TYPE__)
typedef __UINT32_TYPE__ __U32;
#else
#  error
#endif

#endif

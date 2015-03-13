#ifndef __U64

#if defined(__UINT64_TYPE__)
typedef __UINT64_TYPE__ __U64;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __U64 __U64
#pragma clang diagnostic pop

#endif

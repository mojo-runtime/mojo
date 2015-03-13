#ifndef __U32

#if defined(__UINT32_TYPE__)
typedef __UINT32_TYPE__ __U32;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __U32 __U32
#pragma clang diagnostic pop

#endif

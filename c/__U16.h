#ifndef __U16

#if defined(__UINT16_TYPE__)
typedef __UINT16_TYPE__ __U16;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __U16 __U16
#pragma clang diagnostic pop

#endif

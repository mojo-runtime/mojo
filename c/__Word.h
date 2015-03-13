#ifndef __Word

#if defined(__SIZE_TYPE__)
typedef __SIZE_TYPE__ __Word;
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __Word __Word
#pragma clang diagnostic pop

#endif

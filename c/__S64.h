#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__INT64_TYPE__)
typedef __INT64_TYPE__ __S64;
#else
#  error
#endif

#pragma clang diagnostic pop

#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __signed_integer__twos_complement 2

#if defined(__LP64__)
#  define __signed_integer __signed_integer__twos_complement
#else
#  error
#endif

#pragma clang diagnostic pop

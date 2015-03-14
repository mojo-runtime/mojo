#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __SIGNED_INTEGER_REPRESENTATION_TWOS_COMPLEMENT 2

#if defined(__LP64__)
#  define __SIGNED_INTEGER_REPRESENTATION __SIGNED_INTEGER_REPRESENTATION_TWOS_COMPLEMENT
#else
#  error
#endif

#pragma clang diagnostic pop

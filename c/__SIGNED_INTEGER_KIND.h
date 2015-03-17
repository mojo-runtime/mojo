#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT 2

#if defined(__LP64__)
#  define __SIGNED_INTEGER_KIND __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#else
#  error
#endif

#pragma clang diagnostic pop

#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__linux__)
#  if defined(__LP64__) // TODO: any 64-bit
#    define __Result_is_error(word) ((word) > 0xFFFFFFFFFFFFF000UL)
#  else
#    error
#  endif
#else
#  error
#endif

#pragma clang diagnostic pop

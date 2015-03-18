#pragma once

#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments" // FIXME - cannot work into macro

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__GNUC__)
#  define __va_count(...) __va_count_(0, ## __VA_ARGS__, 5, 4, 3, 2, 1, 0)
#  define __va_count_(_0, _1, _2, _3, _4, _5, n, ...) n
#else
#  error
#endif

#pragma clang diagnostic pop

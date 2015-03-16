#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __va_count(...) __va_count_(__VA_ARGS__, 5, 4, 3, 2, 1)
#define __va_count_(_1, _2, _3, _4, _5, n, ...) n

#pragma clang diagnostic pop

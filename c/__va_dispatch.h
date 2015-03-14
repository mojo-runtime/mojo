#ifndef __va_dispatch

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __va_count(...) __va_count_(__VA_ARGS__, 5, 4, 3, 2, 1)
#define __va_count_(_1, _2, _3, _4, _5, n, ...) n

#define __va_dispatch(f, ...) __va_dispatch_(f, __va_count(__VA_ARGS__))(__VA_ARGS__)
#define __va_dispatch_(f, n)  __va_dispatch__(f ## _, n)
#define __va_dispatch__(f_, n) f_ ## n

#pragma clang diagnostic pop

#endif

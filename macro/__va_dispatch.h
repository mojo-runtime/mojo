#pragma once

#include "compat/__va_count.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __va_dispatch(f, ...) __va_dispatch_(f, __va_count(__VA_ARGS__))(__VA_ARGS__)
#define __va_dispatch_(f, n)  __va_dispatch__(f ## _, n)
#define __va_dispatch__(f_, n) f_ ## n

#pragma clang diagnostic pop

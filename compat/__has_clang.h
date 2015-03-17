#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __has_clang(x, y) ((__clang_major__ << 16) + __clang_minor__ >= ((x) << 16) + (y))

#pragma clang diagnostic pop

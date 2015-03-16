#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __has_gnuc(x, y) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((x) << 16) + (y))

#pragma clang diagnostic pop

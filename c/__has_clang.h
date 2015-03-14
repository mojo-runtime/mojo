#pragma once

#define __has_clang(x, y) ((__clang_major__ << 16) + __clang_minor__ >= ((x) << 16) + (y))

#pragma once
#define __has_gnuc(x, y) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((x) << 16) + (y))

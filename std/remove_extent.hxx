#pragma once

#include "size_t.hxx"

namespace std {

template <typename T>
struct remove_extent
{
    using type = T;
};

template <typename T>
struct remove_extent<T[]>
{
    using type = T;
};

template <typename T, size_t n>
struct remove_extent<T[n]>
{
    using type = T;
};

} // namespace std

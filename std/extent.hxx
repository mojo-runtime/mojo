#ifndef _std_extent_hxx_
#define _std_extent_hxx_

#include "size_t.hxx"

namespace std {

template <typename T, unsigned n=0>
struct extent
{
    static
    const size_t
    value = 0;
};

template <typename T>
struct extent<T[], 0>
{
    static
    const size_t
    value = 0;
};

template <typename T, unsigned n>
struct extent<T[], n>
{
    static
    const size_t
    value = std::extent<T, n-1>::value;
};

template <typename T, size_t n>
struct extent<T[n], 0>
{
    static
    const size_t
    value = n;
};

template <typename T, size_t i, unsigned n>
struct extent<T[i], n>
{
    static
    const size_t
    value = std::extent<T, n-1>::value;
};

} // namespace std

#endif

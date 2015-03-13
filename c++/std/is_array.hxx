#ifndef _std_is_array_hxx_
#define _std_is_array_hxx_

#include "size_t.hxx"

namespace std {

template <typename T>
struct is_array
{
    static
    const bool
    value = false;
};

template <typename T, size_t n>
struct is_array<T[n]>
{
    static
    const bool
    value = true;
};

} // namespace std

#endif
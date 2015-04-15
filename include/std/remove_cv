// -*- C++ -*-
#pragma once

#include "remove_const_t"
#include "remove_volatile_t"

namespace std {

template <typename T>
struct remove_cv
{
    using type = remove_volatile_t<remove_const_t<T>>;
};

}

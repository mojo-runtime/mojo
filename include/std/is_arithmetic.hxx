// -*- C++ -*-
#pragma once

#include "is_floating_point"
#include "is_integral"

namespace std {

template <typename T>
struct is_arithmetic : integral_constant<bool,
                                         is_integral<T>() ||
                                         is_floating_point<T>()>
{
};

}

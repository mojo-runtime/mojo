#pragma once

#include "is_floating_point.hxx"
#include "is_integral.hxx"

namespace std {

template <typename T>
struct is_arithmetic : integral_constant<bool, is_integral<T>::value || is_floating_point<T>::value>
{
};

}

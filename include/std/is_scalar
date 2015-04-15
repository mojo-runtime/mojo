// -*- C++ -*-
#pragma once

#include "is_arithmetic"
#include "is_enum"
#include "is_member_pointer"
#include "is_null_pointer"
#include "is_pointer"
#include "is_same"

namespace std {

template <typename T>
struct is_scalar : integral_constant<bool,
                                     std::is_arithmetic<T>()     ||
                                     std::is_enum<T>()           ||
                                     std::is_member_pointer<T>() ||
                                     std::is_null_pointer<T>()   ||
                                     std::is_pointer<T>()>
{
};

}

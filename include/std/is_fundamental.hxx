// -*- C++ -*-
#pragma once

#include "is_arithmetic"
#include "is_null_pointer"
#include "is_same"
#include "is_void"

namespace std {

template <typename T>
struct is_fundamental : integral_constant<bool,
                                          is_arithmetic<T>()   ||
                                          is_null_pointer<T>() ||
                                          is_void<T>()>
{
};

}

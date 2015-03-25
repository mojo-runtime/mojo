#pragma once

#include "is_arithmetic.hxx"
#include "is_same.hxx"
#include "is_void.hxx"
#include "nullptr_t.hxx"
#include "remove_cv_t.hxx"

namespace std {

template <typename T>
struct is_fundamental : integral_constant<bool,
                                          is_arithmetic<T>()                   ||
                                          is_same<nullptr_t, remove_cv_t<T>>() ||
                                          is_void<T>()>
{
};

}

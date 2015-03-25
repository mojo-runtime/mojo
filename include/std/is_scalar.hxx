#pragma once

#include "is_arithmetic.hxx"
#include "is_enum.hxx"
#include "is_member_pointer.hxx"
#include "is_pointer.hxx"
#include "is_same.hxx"
#include "nullptr_t.hxx"
#include "remove_cv_t.hxx"

namespace std {

template <typename T>
struct is_scalar : integral_constant<bool,
                                     std::is_arithmetic<T>()     ||
                                     std::is_enum<T>()           ||
                                     std::is_member_pointer<T>() ||
                                     std::is_pointer<T>()        ||
                                     std::is_same<nullptr_t, remove_cv_t<T>>()>
{
};

}

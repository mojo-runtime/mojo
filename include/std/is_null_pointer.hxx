// -*- C++ -*-
#pragma once

#include "false_type"
#include "nullptr_t"
#include "remove_cv_t"
#include "true_type"

namespace std {

template <typename> struct _is_null_pointer            : false_type {};
template <>         struct _is_null_pointer<nullptr_t> :  true_type {};

template <typename T>
struct is_null_pointer : _is_null_pointer<remove_cv_t<T>>
{
};

}

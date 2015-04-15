// -*- C++ -*-
#pragma once

#include "false_type"
#include "remove_cv_t"
#include "true_type"

namespace std {

template <typename> struct _is_floating_point              : false_type {};
template <>         struct _is_floating_point<float>       :  true_type {};
template <>         struct _is_floating_point<double>      :  true_type {};
template <>         struct _is_floating_point<long double> :  true_type {};

template <typename T>
struct is_floating_point : _is_floating_point<remove_cv_t<T>>
{
};

}

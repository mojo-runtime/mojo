// -*- C++ -*-
#pragma once

#include "false_type"
#include "remove_cv_t"
#include "true_type"

namespace std {

template <typename> struct _is_void       : false_type {};
template <>         struct _is_void<void> :  true_type {};

template <typename T>
struct is_void : _is_void<remove_cv_t<T>>
{
};

}

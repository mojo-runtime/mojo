// -*- C++ -*-
#pragma once

#include "false_type"
#include "remove_cv_t"
#include "true_type"

namespace std {

template <typename>   struct _is_pointer     : false_type {};
template <typename T> struct _is_pointer<T*> :  true_type {};

template <typename T>
struct is_pointer : _is_pointer<remove_cv_t<T>>
{
};

}

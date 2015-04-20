// -*- C++ -*-
#pragma once

#include "remove_const"

namespace std {

template <typename T>
using remove_const_t = typename remove_const<T>::type;

}

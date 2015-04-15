// -*- C++ -*-
#pragma once

#include "remove_volatile"

namespace std {

template <typename T>
using remove_volatile_t = typename remove_volatile<T>::type;

}

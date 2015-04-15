// -*- C++ -*-
#pragma once

#include "add_rvalue_reference"

namespace std {

template <typename T>
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;

}

#ifndef std_enable_if_t_hxx_
#define std_enable_if_t_hxx_

#include "enable_if.hxx"

namespace std {

template <bool x, typename T=void>
using enable_if_t = typename enable_if<x, T>::type;

} // namespace std

#endif

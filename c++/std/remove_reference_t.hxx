#ifndef _std_remove_reference_t_hxx_
#define _std_remove_reference_t_hxx_

#include "remove_reference.hxx"

namespace std {

template <typename T>
using remove_reference_t = typename remove_reference<T>::type;

} // namespace std

#endif

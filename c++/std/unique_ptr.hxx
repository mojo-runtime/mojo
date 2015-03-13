#ifndef _std_unique_ptr_hxx_
#define _std_unique_ptr_hxx_

#include "default_delete.hxx"

namespace std {

template <typename T, typename Deleter=default_delete<T>>
struct unique_ptr;

template <typename T, typename Deleter>
struct unique_ptr<T[], Deleter>;

} // namespace std

#endif

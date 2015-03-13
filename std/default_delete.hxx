#ifndef _std_default_delete_hxx_
#define _std_default_delete_hxx_

namespace std {

template <typename T>
struct default_delete;

template <typename T>
struct default_delete<T[]>;

} // namespace std

#endif

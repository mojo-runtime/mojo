#ifndef _std_iterator_traits_hxx_
#define _std_iterator_traits_hxx_

namespace std {

template <typename Iterator>
struct iterator_traits;

template <typename T>
struct iterator_traits<T*>;


template <typename T>
struct iterator_traits<const T*>;

} // namespace std

#endif

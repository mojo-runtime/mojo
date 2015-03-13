#ifndef _std_remove_reference_hxx_
#define _std_remove_reference_hxx_

namespace std {

template <typename T> struct remove_reference      { using type = T; };
template <typename T> struct remove_reference<T&>  { using type = T; };
template <typename T> struct remove_reference<T&&> { using type = T; };

} // namespace std

#endif

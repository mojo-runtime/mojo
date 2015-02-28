#ifndef std_enable_if_hxx_
#define std_enable_if_hxx_

namespace std {

template <bool x, typename T=void>
struct enable_if
{
};

template <typename T>
struct enable_if<true, T>
{
    typedef T type;
};

} // namespace std

#endif

#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_extension)
#  define __has_underlying_type __has_extension(underlying_type)
#elif defined(__GNUC__)
#  define __has_underlying_type 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop

namespace std {

#if __has_underlying_type

template <typename T>
struct underlying_type
{
    using type = __underlying_type(T);
};

#else
#  error
#endif

}

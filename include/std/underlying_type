// -*- C++ -*-
#pragma once

#if defined(__has_extension)
#  define _has_primitive __has_extension(underlying_type)
#elif defined(__GNUC__) // Version?
#  define _has_primitive 1
#else
#  error
#endif

#if _has_primitive

namespace std {

template <typename T>
struct underlying_type
{
    using type = __underlying_type(T);
};

}

#else
#  error
#endif

#undef _has_primitive

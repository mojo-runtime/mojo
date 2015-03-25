#pragma once

#if defined(__has_extension)
#  if __has_extension(underlying_type)

namespace std {

template <typename T>
struct underlying_type
{
    using type = __underlying_type(T);
};

}

#  else
#    error
#  endif
#else
#  error
#endif

#ifndef __builtin_types_compatible_p
#  ifndef __cplusplus
#    ifndef __GNUC__
#      error todo
#    endif
#  else
#    define __builtin_types_compatible_p(X, Y) ::c::__compiler::builtin_types_compatible_p<X, Y>

inline namespace c {
namespace __compiler {

template <typename, typename>
static constexpr
bool
builtin_types_compatible_p = false;

template <typename T>
static constexpr
bool
builtin_types_compatible_p<T, T> = true;

} // namespace __compiler
} // inline namespace c

#  endif
#endif

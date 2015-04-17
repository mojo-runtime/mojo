#include "std/is_arithmetic"

static_assert( std::is_arithmetic<float>(), "");
static_assert(!std::is_arithmetic<void>(), "");
static_assert( std::is_arithmetic<unsigned int>(), "");

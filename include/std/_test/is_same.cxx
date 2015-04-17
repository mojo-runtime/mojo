#include "std/is_same"

static_assert(!std::is_same<int, float>(), "");
static_assert( std::is_same<int, int>(), "");

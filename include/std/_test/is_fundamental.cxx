#include "std/is_fundamental"

static_assert( std::is_fundamental<int>(), "");
static_assert(!std::is_fundamental<int&>(), "");

#include "std/is_null_pointer"

static_assert( std::is_null_pointer<decltype(nullptr)>(), "");
static_assert(!std::is_null_pointer<int>(), "");

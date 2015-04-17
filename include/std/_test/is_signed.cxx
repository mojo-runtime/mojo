#include "std/is_signed"

struct Struct
{
};

static_assert(!std::is_signed<Struct>(), "");
static_assert( std::is_signed<float>(), "");
static_assert( std::is_signed<int>(), "");
static_assert(!std::is_signed<unsigned int>(), "");

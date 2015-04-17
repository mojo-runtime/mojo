#include "std/is_union"

union Union
{
    int
    a;

    float
    b;
};

static_assert( std::is_union<Union>(), "");
static_assert(!std::is_union<int>(), "");

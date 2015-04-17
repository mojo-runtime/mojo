#include "std/is_enum"

enum class Color
{
    red,
    green,
    blue,
};

static_assert(std::is_enum<Color>(), "");

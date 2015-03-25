//--------------------------------------------------------------------------------------------------

#include "std/is_same.hxx"

static_assert(!std::is_same<int, float>::value);
static_assert(std::is_same<int, int>::value);

//--------------------------------------------------------------------------------------------------

#include "std/is_enum.hxx"

enum class Color
{
    red,
    green,
    blue,
};

static_assert(std::is_enum<Color>::value);

//--------------------------------------------------------------------------------------------------

int
main()
{
    return 0;
}

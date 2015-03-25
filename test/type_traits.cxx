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

#include "std/remove_cv_t.hxx"

static_assert(std::is_same<std::remove_cv_t<               int>, int>::value);
static_assert(std::is_same<std::remove_cv_t<const          int>, int>::value);
static_assert(std::is_same<std::remove_cv_t<      volatile int>, int>::value);
static_assert(std::is_same<std::remove_cv_t<const volatile int>, int>::value);

//--------------------------------------------------------------------------------------------------

#include "std/underlying_type_t.hxx"

enum class Char : char {};
enum class Int  : int  {};
enum class Long : long {};

static_assert(std::is_same<std::underlying_type_t<Char>, char>::value);
static_assert(std::is_same<std::underlying_type_t<Int >, int >::value);
static_assert(std::is_same<std::underlying_type_t<Long>, long>::value);

//--------------------------------------------------------------------------------------------------

int
main()
{
    return 0;
}

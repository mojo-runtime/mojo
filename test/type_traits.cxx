//--------------------------------------------------------------------------------------------------

#include "std/is_same.hxx"

static_assert(!std::is_same<int, float>());
static_assert( std::is_same<int, int>());

//--------------------------------------------------------------------------------------------------

#include "std/is_enum.hxx"

enum class Color
{
    red,
    green,
    blue,
};

static_assert(std::is_enum<Color>());

//--------------------------------------------------------------------------------------------------

#include "std/remove_cv_t.hxx"

static_assert(std::is_same<std::remove_cv_t<               int>, int>());
static_assert(std::is_same<std::remove_cv_t<const          int>, int>());
static_assert(std::is_same<std::remove_cv_t<      volatile int>, int>());
static_assert(std::is_same<std::remove_cv_t<const volatile int>, int>());

//--------------------------------------------------------------------------------------------------

#include "std/underlying_type_t.hxx"

enum class Char : char {};
enum class Int  : int  {};
enum class Long : long {};

static_assert(std::is_same<std::underlying_type_t<Char>, char>());
static_assert(std::is_same<std::underlying_type_t<Int >, int >());
static_assert(std::is_same<std::underlying_type_t<Long>, long>());

//--------------------------------------------------------------------------------------------------

#include "std/is_integral.hxx"

static_assert( std::is_integral<unsigned int>());

//--------------------------------------------------------------------------------------------------

#include "std/is_arithmetic.hxx"

static_assert( std::is_arithmetic<float>());
static_assert(!std::is_arithmetic<void>());
static_assert( std::is_arithmetic<unsigned int>());

//--------------------------------------------------------------------------------------------------

#include "std/is_fundamental.hxx"

static_assert( std::is_fundamental<int>());
static_assert(!std::is_fundamental<int&>());

//--------------------------------------------------------------------------------------------------

#include "std/is_union.hxx"

union Union
{
    int
    a;

    float
    b;
};

static_assert( std::is_union<Union>());
static_assert(!std::is_union<int>());

//--------------------------------------------------------------------------------------------------

#include "std/is_pointer.hxx"

static_assert( std::is_pointer<char*>());
static_assert( std::is_pointer<const char*>());
static_assert(!std::is_pointer<int>());

//--------------------------------------------------------------------------------------------------

#include "std/is_scalar.hxx"

struct Struct
{
};

static_assert( std::is_scalar<int>());
static_assert( std::is_scalar<const char*>());
static_assert(!std::is_scalar<Struct>());

//--------------------------------------------------------------------------------------------------

#include "std/is_signed.hxx"

static_assert(!std::is_signed<Struct>());
static_assert( std::is_signed<float>());
static_assert( std::is_signed<int>());
static_assert(!std::is_signed<unsigned int>());

//--------------------------------------------------------------------------------------------------

#include "std/is_unsigned.hxx"

static_assert(!std::is_unsigned<Struct>());
static_assert(!std::is_unsigned<float>());
static_assert(!std::is_unsigned<int>());
static_assert( std::is_unsigned<unsigned int>());

//--------------------------------------------------------------------------------------------------

int
main()
{
    return 0;
}

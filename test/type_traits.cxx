
#include "c/__static_assert.h"

//--------------------------------------------------------------------------------------------------

#include "std/is_same.hxx"

__static_assert((!std::is_same<int, float>()));
__static_assert(( std::is_same<int, int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_enum.hxx"

enum class Color
{
    red,
    green,
    blue,
};

__static_assert((std::is_enum<Color>()));

//--------------------------------------------------------------------------------------------------

#include "std/remove_cv_t.hxx"

__static_assert((std::is_same<std::remove_cv_t<               int>, int>()));
__static_assert((std::is_same<std::remove_cv_t<const          int>, int>()));
__static_assert((std::is_same<std::remove_cv_t<      volatile int>, int>()));
__static_assert((std::is_same<std::remove_cv_t<const volatile int>, int>()));

//--------------------------------------------------------------------------------------------------

#include "std/underlying_type_t.hxx"

enum class Char : char {};
enum class Int  : int  {};
enum class Long : long {};

__static_assert((std::is_same<std::underlying_type_t<Char>, char>()));
__static_assert((std::is_same<std::underlying_type_t<Int >, int >()));
__static_assert((std::is_same<std::underlying_type_t<Long>, long>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_integral.hxx"

__static_assert(( std::is_integral<unsigned int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_arithmetic.hxx"

__static_assert(( std::is_arithmetic<float>()));
__static_assert((!std::is_arithmetic<void>()));
__static_assert(( std::is_arithmetic<unsigned int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_fundamental.hxx"

__static_assert(( std::is_fundamental<int>()));
__static_assert((!std::is_fundamental<int&>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_union.hxx"

union Union
{
    int
    a;

    float
    b;
};

__static_assert(( std::is_union<Union>()));
__static_assert((!std::is_union<int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_pointer.hxx"

__static_assert(( std::is_pointer<char*>()));
__static_assert(( std::is_pointer<const char*>()));
__static_assert((!std::is_pointer<int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_scalar.hxx"

struct Struct
{
};

__static_assert(( std::is_scalar<int>()));
__static_assert(( std::is_scalar<const char*>()));
__static_assert((!std::is_scalar<Struct>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_signed.hxx"

__static_assert((!std::is_signed<Struct>()));
__static_assert(( std::is_signed<float>()));
__static_assert(( std::is_signed<int>()));
__static_assert((!std::is_signed<unsigned int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_unsigned.hxx"

__static_assert((!std::is_unsigned<Struct>()));
__static_assert((!std::is_unsigned<float>()));
__static_assert((!std::is_unsigned<int>()));
__static_assert(( std::is_unsigned<unsigned int>()));

//--------------------------------------------------------------------------------------------------

#include "std/is_null_pointer.hxx"

__static_assert(( std::is_null_pointer<decltype(nullptr)>()));
__static_assert((!std::is_null_pointer<int>()));

//--------------------------------------------------------------------------------------------------

int
main()
{
    return 0;
}

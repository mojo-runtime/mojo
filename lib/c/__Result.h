#pragma once

#include "__Bool.h"
#include "__Word.h"
#include "__old_style_cast.h"

typedef struct
{
    __Word
    __word;

#if defined(__FreeBSD__)
    __Word
    __is_error;
#endif
}
__Result;

static inline
__Bool
__Result_is_error(const __Result self)
{
#if defined(__linux__)
#  if defined(__LP64__)
    return self.__word > 0XFFFFFFFFFFFFF000UL;
#  elif defined(__ILP32__)
    return self.__word > 0XFFFFF000UL;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
    return self.__is_error;
#else
#  error
#endif
}

static inline
int
__Result_error_number(const __Result self)
{
#if defined(__linux__)
    return __old_style_cast(int, -self.__word);
#elif defined(__FreeBSD__)
    return __old_style_cast(int, self.__word);
#else
#  error
#endif
}

#pragma once

#if !defined(__cplusplus)
#  include <feature/__has_c_alignas.h>
#  include <feature/__has_c_alignof.h>
#  if __has_c_alignas && __has_c_alignof
#    define alignas _Alignas
#    define alignof _Alignof
#  else
#    error
#  endif
#endif

#define __alignas_is_defined 1
#define __alignof_is_defined 1

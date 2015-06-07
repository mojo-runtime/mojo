#pragma once

#if defined(DEBUG)
#  include "__error.hxx"
#  define todo() ::debug::__error("todo", __FILE__, __PRETTY_FUNCTION__, __LINE__, 0)
#else
#  include <feature/__has_builtin_unreachable.h>
#  if __has_builtin_unreachable
#    define todo() __builtin_unreachable()
#  else
#    error
#  endif
#endif

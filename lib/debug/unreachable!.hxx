#pragma once

#if defined(DEBUG)
#  include "__error.hxx"
#  define unreachable(message) ::debug::__error("unreachable", __FILE__, __PRETTY_FUNCTION__, __LINE__, message)
#else
#  include <feature/__has_builtin_unreachable.h>
#  if __has_builtin_unreachable
#    define unreachable(message) __builtin_unreachable()
#  else
#    error
#  endif
#endif

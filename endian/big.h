#ifndef compiler_has_endian_big
#  if defined __BYTE_ORDER__ && defined __ORDER_BIG_ENDIAN__
#    define compiler_has_endian_big (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
#  else
#    error todo
#  endif
#endif

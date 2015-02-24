#ifndef has_endian_little
#  if defined __BYTE_ORDER__ && defined __ORDER_LITTLE_ENDIAN__
#    define has_endian_little (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#  else
#    error todo
#  endif
#endif

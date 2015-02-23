#ifndef has_attribute_noreturn
#  ifdef __has_attribute
#    define has_attribute_noreturn __has_attribute(__noreturn__)
#  else
#    error todo
#  endif
#endif

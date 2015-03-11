#ifndef has_attribute_optnone

#if defined(__has_attribute)
#  define has_attribute_optnone __has_attribute(__optnone__)
#else // Assuming
#  define has_attribute_optnone 0
#endif

#endif

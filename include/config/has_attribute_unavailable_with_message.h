#ifndef has_attribute_unavailable_with_message

#if defined(__has_extension)
#  define has_attribute_unavailable_with_message __has_extension(attribute_unavailable_with_message)
#else
#  define has_attribute_unavailable_with_message 0
#endif

#endif

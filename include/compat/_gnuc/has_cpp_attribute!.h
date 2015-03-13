#ifndef _gnuc_has_cpp_attribute

#include "has_version!.h"

#define _gnuc_has_cpp_attribute_noreturn _gnuc_has_version(4, 8)

#define _gnuc_has_cpp_attribute(x) _gnuc_has_cpp_attribute_ ## x

#endif

#pragma once

#include "__has_feature.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__auto_return) && __has_feature(cxx_return_type_deduction)
#  define __auto_return auto
#endif

#if !defined(__auto_return)
#  error
#endif

#pragma clang diagnostic pop

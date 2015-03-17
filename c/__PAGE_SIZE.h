#pragma once

#include "__PAGE_SHIFT.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#define __PAGE_SIZE (1u << __PAGE_SHIFT)

#pragma clang diagnostic pop

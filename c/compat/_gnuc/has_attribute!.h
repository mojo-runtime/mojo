#ifndef _gnuc_has_attribute

#include "has_version!.h"

#define _gnuc_has_attribute_error    1 // version?
#define _gnuc_has_attribute_mode     1 // version?
#define _gnuc_has_attribute_noreturn _gnuc_has_version(2, 5)
#define _gnuc_has_attribute_nothrow  _gnuc_has_version(3, 3)
#define _gnuc_has_attribute_optimize 1 // version?
#define _gnuc_has_attribute_optnone  0 // assuming
#define _gnuc_has_attribute_unused   1 // version?
#define _gnuc_has_attribute_used     1 // version?

#define _gnuc_has_attribute(x) _gnuc_has_attribute_ ## x

#endif
